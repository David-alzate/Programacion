# -*- coding: utf-8 -*-
from PyQt5 import QtCore, QtGui, QtWidgets
from backend.producto import Producto
from backend.modelo import BaseDatos
from backend.mesa import Mesa

productos = Producto
mesas = Mesa

class Ui_PedidoMesero(object):
    def __init__(self):
        # CLASE BASE DE DATOS
        dataBase = BaseDatos("postgres", "abcd1234", "poogrupo01.cqozrgcn8atr.us-east-1.rds.amazonaws.com")
        self.conexion = dataBase.conectar()

        ## GENERAR LISTADO DE PRODUCTOS
        self.listadoProductos = productos.consultarProductos(self.conexion)
        print(self.listadoProductos)
        self.listadoMesas = mesas.consultarMesas(self.conexion)

    def setupUi(self, MainWindow):
        self.MainWindow = MainWindow
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(414, 295)
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")

        # Icono
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap("icono.ico"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        MainWindow.setWindowIcon(icon)

        # Creación etiqueta de titulo
        self.titulo = QtWidgets.QLabel(self.centralwidget)
        self.titulo.setGeometry(QtCore.QRect(172, 20, 70, 16))
        font = QtGui.QFont()
        font.setPointSize(12)
        font.setBold(True)
        font.setWeight(75)
        self.titulo.setFont(font)
        self.titulo.setObjectName("titulo")

        self.pizza = QtWidgets.QLabel(self.centralwidget)
        self.pizza.setGeometry(QtCore.QRect(10, 50, 47, 30))
        font = QtGui.QFont()
        font.setPointSize(10)
        self.pizza.setFont(font)
        self.pizza.setObjectName("pizza")

        self.bebida = QtWidgets.QLabel(self.centralwidget)
        self.bebida.setGeometry(QtCore.QRect(10, 90, 47, 30))
        font = QtGui.QFont()
        font.setPointSize(10)
        self.bebida.setFont(font)
        self.bebida.setObjectName("bebida")

        self.mesa = QtWidgets.QLabel(self.centralwidget)
        self.mesa.setGeometry(QtCore.QRect(10, 130, 47, 30))
        font = QtGui.QFont()
        font.setPointSize(10)
        self.mesa.setFont(font)
        self.mesa.setObjectName("mesa")

        self.observaciones = QtWidgets.QLabel(self.centralwidget)
        self.observaciones.setGeometry(QtCore.QRect(10, 170, 91, 30))
        font = QtGui.QFont()
        font.setPointSize(10)
        self.observaciones.setFont(font)
        self.observaciones.setObjectName("observaciones")

        self.cBPizza = QtWidgets.QComboBox(self.centralwidget)
        self.cBPizza.setGeometry(QtCore.QRect(100, 50, 300, 30))
        font = QtGui.QFont()
        font.setPointSize(10)
        self.cBPizza.setFont(font)
        self.cBPizza.setObjectName("cBPizza")

        ## GENERAR LISTADO DE PRODUCTOS
        for pizza in self.listadoProductos:
            if pizza[4] == 1:
                print(pizza)
                itemPizza = str(pizza[0]) + ". " + pizza[1]
                self.cBPizza.addItem(itemPizza)

        self.cBMesa = QtWidgets.QComboBox(self.centralwidget)
        self.cBMesa.setGeometry(QtCore.QRect(100, 130, 300, 30))
        font = QtGui.QFont()
        font.setPointSize(10)
        self.cBMesa.setFont(font)
        self.cBMesa.setObjectName("cBMesa")

        ## GENERAR LISTADO DE MESAS
        for mesa in self.listadoMesas:
            self.cBMesa.addItem(str(mesa[1]))

        self.cBBebida = QtWidgets.QComboBox(self.centralwidget)
        self.cBBebida.setGeometry(QtCore.QRect(100, 90, 300, 30))
        font = QtGui.QFont()
        font.setPointSize(10)
        self.cBBebida.setFont(font)
        self.cBBebida.setObjectName("cBBebida")

        ## GENERAR LISTADO DE PRODUCTOS
        for bebida in self.listadoProductos:

            if bebida[4] == 2:
                itemBebida = str(bebida[0]) + ". " + bebida[1]
                self.cBBebida.addItem(itemBebida)

        self.observaciones_2 = QtWidgets.QTextEdit(self.centralwidget)
        self.observaciones_2.setGeometry(QtCore.QRect(100, 170, 300, 71))
        self.observaciones_2.setObjectName("observaciones_2")

        self.botonGenerar = QtWidgets.QPushButton(self.centralwidget)
        self.botonGenerar.setGeometry(QtCore.QRect(30, 250, 130, 30))
        font = QtGui.QFont()
        font.setPointSize(12)
        font.setBold(True)
        font.setWeight(75)
        self.botonGenerar.setFont(font)
        self.botonGenerar.setObjectName("botonGenerar")
        ## ACCIONES BOTON
        self.botonGenerar.clicked.connect(self.hacerPedido)

        self.botonCancelar = QtWidgets.QPushButton(self.centralwidget)
        self.botonCancelar.setGeometry(QtCore.QRect(250, 250, 130, 30))
        self.botonCancelar.clicked.connect(self.accionCancelar)
        font = QtGui.QFont()
        font.setPointSize(12)
        font.setBold(True)
        font.setWeight(75)
        self.botonCancelar.setFont(font)
        self.botonCancelar.setObjectName("botonCancelar")

        MainWindow.setCentralWidget(self.centralwidget)
        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)
        MainWindow.show()

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "Pedido"))
        self.titulo.setText(_translate("MainWindow", "PEDIDO"))
        self.pizza.setText(_translate("MainWindow", "Pizza"))
        self.bebida.setText(_translate("MainWindow", "Bebida"))
        self.mesa.setText(_translate("MainWindow", "Mesa"))
        self.observaciones.setText(_translate("MainWindow", "Observaciones"))
        self.botonGenerar.setText(_translate("MainWindow", "Generar"))
        self.botonCancelar.setText(_translate("MainWindow", "Cancelar"))

    def accionCancelar(self):
        try:
            self.MainWindow.close()

        except Exception as e:
            print(e)

    def hacerPedido(self):
        pizza = self.cBPizza.currentText()
        bebida = self.cBBebida.currentText()
        mesa = self.cBMesa.currentText()
        observacion = self.observaciones_2.toPlainText()
        print(pizza, bebida, mesa, observacion)