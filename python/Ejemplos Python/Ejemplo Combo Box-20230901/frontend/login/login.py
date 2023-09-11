from PyQt5.QtWidgets import QMainWindow
from frontend.emergente.emergente import *
from frontend.pedido.pedidoMesero import *
from backend.usuario import Usuario
from backend.modelo import BaseDatos
import os
from dotenv import load_dotenv
load_dotenv()


class Ui_Login(object):
    def setupUi(self, MainWindow):
        self.MainWindow = MainWindow
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(368, 165)
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")

        # Icono
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap("icono.ico"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        MainWindow.setWindowIcon(icon)

        # Creación linea de texto usuario
        self.lineUsuario = QtWidgets.QLineEdit(self.centralwidget)
        self.lineUsuario.setGeometry(QtCore.QRect(140, 10, 210, 30))
        font = QtGui.QFont()
        font.setPointSize(12)
        self.lineUsuario.setFont(font)
        self.lineUsuario.setEchoMode(QtWidgets.QLineEdit.Normal)
        self.lineUsuario.setObjectName("lineUsuario")

        # Etiqueta usuario
        self.usuario = QtWidgets.QLabel(self.centralwidget)
        self.usuario.setGeometry(QtCore.QRect(20, 20, 80, 16))
        font = QtGui.QFont()
        font.setPointSize(12)
        font.setBold(True)
        font.setWeight(75)
        self.usuario.setFont(font)
        self.usuario.setObjectName("usuario")

        # Etiqueta contraseña
        self.contrasena = QtWidgets.QLabel(self.centralwidget)
        self.contrasena.setGeometry(QtCore.QRect(20, 60, 100, 16))
        font = QtGui.QFont()
        font.setPointSize(12)
        font.setBold(True)
        font.setWeight(75)
        self.contrasena.setFont(font)
        self.contrasena.setObjectName("contrasena")

        # Creación botón Iniciar
        self.botonIniciar = QtWidgets.QPushButton(self.centralwidget)
        self.botonIniciar.setGeometry(QtCore.QRect(30, 100, 130, 30))
        self.botonIniciar.clicked.connect(self.ventanaPrincipal)
        font = QtGui.QFont()
        font.setPointSize(12)
        font.setBold(True)
        font.setWeight(75)
        self.botonIniciar.setFont(font)
        self.botonIniciar.setObjectName("botonIniciar")

        # Creación botón cancelar
        self.botonCancelar = QtWidgets.QPushButton(self.centralwidget)
        self.botonCancelar.setGeometry(QtCore.QRect(210, 100, 130, 30))
        self.botonCancelar.clicked.connect(self.accionCancelar)
        font = QtGui.QFont()
        font.setPointSize(12)
        font.setBold(True)
        font.setWeight(75)
        self.botonCancelar.setFont(font)
        self.botonCancelar.setObjectName("botonCancelar")

        # Creación linea de texto contraseña
        self.lineContrasena = QtWidgets.QLineEdit(self.centralwidget)
        self.lineContrasena.setGeometry(QtCore.QRect(140, 50, 210, 30))
        font = QtGui.QFont()
        font.setPointSize(12)
        self.lineContrasena.setFont(font)
        self.lineContrasena.setEchoMode(QtWidgets.QLineEdit.Password)
        self.lineContrasena.setObjectName("lineContrasena")

        MainWindow.setCentralWidget(self.centralwidget)
        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.usuario.setText(_translate("MainWindow", "Usuario"))
        self.contrasena.setText(_translate("MainWindow", "Contraseña"))
        self.botonIniciar.setText(_translate("MainWindow", "Iniciar"))
        self.botonCancelar.setText(_translate("MainWindow", "Cancelar"))

    def ventanaPrincipal(self):
        try:
            contrasena = self.lineContrasena.text()
            print(type(contrasena))
            usuario = self.lineUsuario.text()
            self.ventana = QMainWindow()

            # CLASE BASE DE DATOS
            dataBase = BaseDatos("postgres", "abcd1234", "poogrupo01.cqozrgcn8atr.us-east-1.rds.amazonaws.com")
            conexion = dataBase.conectar()

            # CLASE USUARIO
            usuarioDB = Usuario.consultarUsuario(conexion, usuario)
            print(usuarioDB)
            print("contraseña " + usuarioDB[6])
            print("usuario " + str(usuarioDB[3]))
            if usuarioDB:
                if usuarioDB[6] == contrasena and str(usuarioDB[3]) == "1":
                    print("Mesero")
                    self.ui = Ui_PedidoMesero()
                    self.ui.setupUi(self.ventana)

                elif usuarioDB[6] == contrasena and str(usuarioDB[3]) == "2":
                    self.ui = Ui_Emergente()
                    self.ui.setupUi(self.ventana, "ADMINISTRADOR")

                elif usuarioDB[6] == contrasena and str(usuarioDB[3]) == "3":
                    self.ui = Ui_Emergente()
                    self.ui.setupUi(self.ventana, "COCINERO")

                else:
                    self.ui = Ui_Emergente()
                    self.ui.setupUi(self.ventana, "ERROR AL INGRESAR LA CONTRASEÑA")
                    print(usuarioDB[6]  + " " + str(usuarioDB[3]))
            else:
                self.ui = Ui_Emergente()
                self.ui.setupUi(self.ventana, "EL USUARIO NO EXISTE")

        except Exception as e:
            print(e)

    def accionCancelar(self):
        try:
            self.MainWindow.close()

        except Exception as e:
            print(e)