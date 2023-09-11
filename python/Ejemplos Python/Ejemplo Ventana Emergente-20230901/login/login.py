from PyQt5 import QtCore, QtGui, QtWidgets
from emergente2 import *


class Ui_Login(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(368, 165)
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")

        # Creación linea de texto usuario
        self.lineUsuario = QtWidgets.QLineEdit(self.centralwidget)
        self.lineUsuario.setGeometry(QtCore.QRect(140, 10, 211, 31))
        font = QtGui.QFont()
        font.setPointSize(12)
        self.lineUsuario.setFont(font)
        self.lineUsuario.setEchoMode(QtWidgets.QLineEdit.Normal)
        self.lineUsuario.setObjectName("lineUsuario")

        # Etiqueta usuario
        self.usuario = QtWidgets.QLabel(self.centralwidget)
        self.usuario.setGeometry(QtCore.QRect(20, 20, 81, 16))
        font = QtGui.QFont()
        font.setPointSize(12)
        font.setBold(True)
        font.setWeight(75)
        self.usuario.setFont(font)
        self.usuario.setObjectName("usuario")

        # Etiqueta contraseña
        self.contrasena = QtWidgets.QLabel(self.centralwidget)
        self.contrasena.setGeometry(QtCore.QRect(20, 60, 101, 16))
        font = QtGui.QFont()
        font.setPointSize(12)
        font.setBold(True)
        font.setWeight(75)
        self.contrasena.setFont(font)
        self.contrasena.setObjectName("contrasena")

        # Creación botón Iniciar
        self.botonIniciar = QtWidgets.QPushButton(self.centralwidget)
        self.botonIniciar.setGeometry(QtCore.QRect(30, 100, 131, 31))
        self.botonIniciar.clicked.connect(self.ventanaPrincipal)
        font = QtGui.QFont()
        font.setPointSize(12)
        font.setBold(True)
        font.setWeight(75)
        self.botonIniciar.setFont(font)
        self.botonIniciar.setObjectName("botonoIniciar")

        # Creación botón cancelar
        self.botonCancelar = QtWidgets.QPushButton(self.centralwidget)
        self.botonCancelar.setGeometry(QtCore.QRect(210, 100, 131, 31))
        self.botonCancelar.clicked.connect(self.accionCancelar)
        font = QtGui.QFont()
        font.setPointSize(12)
        font.setBold(True)
        font.setWeight(75)
        self.botonCancelar.setFont(font)
        self.botonCancelar.setObjectName("botonCancelar")

        # Creación linea de texto contraseña
        self.lineContrasena = QtWidgets.QLineEdit(self.centralwidget)
        self.lineContrasena.setGeometry(QtCore.QRect(140, 50, 211, 31))
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
        texto = self.lineContrasena.text()
        self.ventana = QWidget()
        self.ui = Ui_Emergente(self.ventana, texto)

    def accionCancelar(self):
        self.close()
        print("HOLA MUNDO")