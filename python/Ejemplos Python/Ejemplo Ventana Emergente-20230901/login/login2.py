# -*- coding: utf-8 -*-

from PyQt5 import QtCore, QtGui, QtWidgets

from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from emergente2 import *


class Ui_Login2(QWidget):

    def __init__(self, interfaz):
        print(type(interfaz))
        super().__init__()
        print("aquí")
        self.interfaz = interfaz
        self.title = 'LOGIN PIZZERIA'
        self.width = 368
        self.height = 165
        self.inicializar_GUI(interfaz)

    def inicializar_GUI(self, interfaz):
        print(type(interfaz))
        interfaz.resize(149, 112)
        # Inicializamos la ventana
        # self.setWindowTitle(self.title)
        # self.setFixedSize(self.width, self.height)
        #self.distribuidor_base = QVBoxLayout(self)

        # Creación del espacio de los botones
        self.centralwidget = QtWidgets.QWidget(interfaz)
        self.centralwidget.setObjectName("centralwidget")

        self.distribuidor_botones = QGridLayout()
        self.centralwidget.setLayout(self.distribuidor_botones)


        # Etiqueta usuario
        self.etiquetaUsuario = QLabel(self.centralwidget)
        self.etiquetaUsuario.setText("Usuario")
        self.etiquetaUsuario.setGeometry(20, 20, 81, 16)
        font = QtGui.QFont()
        font.setPointSize(12)
        font.setBold(True)
        font.setWeight(75)
        self.etiquetaUsuario.setFont(font)
        self.etiquetaUsuario.setObjectName("usuario")
        print("aqui")
        #self.distribuidor_base.addWidget(self.etiquetaUsuario, Qt.AlignLeft)

        # Creación linea de texto usuario
        self.lineUsuario = QtWidgets.QLineEdit(self.centralwidget)
        self.lineUsuario.setGeometry(QtCore.QRect(140, 10, 211, 31))
        font = QtGui.QFont()
        font.setPointSize(12)
        self.lineUsuario.setFont(font)
        self.lineUsuario.setEchoMode(QtWidgets.QLineEdit.Normal)
        self.lineUsuario.setObjectName("lineUsuario")
        #self.distribuidor_base.addWidget(self.lineUsuario, Qt.AlignCenter)

        # Etiqueta contraseña
        self.etiquetaContrasena = QLabel("Contraseña")
        self.etiquetaContrasena.setAlignment(Qt.AlignLeft)
        self.etiquetaContrasena.setGeometry(60, 20, 47, 13)
        font = QtGui.QFont()
        font.setPointSize(12)
        font.setBold(True)
        font.setWeight(75)
        self.etiquetaContrasena.setFont(font)
        #self.distribuidor_base.addWidget(self.etiquetaContrasena, Qt.AlignLeft)

        # Creación linea de texto contraseña
        self.lineContrasena = QLineEdit()
        self.lineContrasena.setGeometry(14, 50, 211, 31)
        font = QtGui.QFont()
        font.setPointSize(12)
        self.lineContrasena.setFont(font)
        self.lineContrasena.setEchoMode(QtWidgets.QLineEdit.Password)
        self.lineContrasena.setObjectName("lineContrasena")
        #self.distribuidor_base.addWidget(self.lineContrasena, Qt.AlignLeft)

        # Hacemos la ventana visible
        print("aqui")
        self.show()

    def ventanaPrincipal(self):
        print(self.lineContrasena.text())
        self.ventana = QWidget()
        texto = self.lineContrasena.text()
        self.ui = Ui_Emergente(self.ventana, texto )

    def accionCancelar(self):
        self.close()
        print("HOLA MUNDO")