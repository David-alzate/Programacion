# -*- coding: utf-8 -*-

from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtWidgets import QPushButton


class Ui_Emergente(object):
    def setupUi(self, Emergente, texto):
        self.Emergente = Emergente
        Emergente.setObjectName("Emergente")
        Emergente.resize(280, 120)

        # Icono
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap("icono.ico"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        Emergente.setWindowIcon(icon)

        # Central Widget
        self.centralwidget = QtWidgets.QWidget(Emergente)
        self.centralwidget.setObjectName("centralwidget")

        # Creación de la etiqueta de texto
        self.texto = QtWidgets.QLabel(self.centralwidget)
        self.texto.setGeometry(QtCore.QRect(20, 10, 230, 70))
        font = QtGui.QFont()
        font.setPointSize(12)
        self.texto.setFont(font)
        self.texto.setAlignment(QtCore.Qt.AlignCenter)
        self.texto.setObjectName("texto")

        # Creación botón aceptar
        self.botonAceptar = QtWidgets.QPushButton(self.centralwidget)
        self.botonAceptar.setGeometry(QtCore.QRect(75, 80, 130, 30))
        self.botonAceptar.setText("Aceptar")
        self.botonAceptar.clicked.connect(self.accionAceptar)
        font = QtGui.QFont()
        font.setPointSize(12)
        font.setBold(True)
        font.setWeight(75)
        self.botonAceptar.setFont(font)
        self.botonAceptar.setObjectName("botonAceptar")

        Emergente.setCentralWidget(self.centralwidget)
        self.retranslateUi(Emergente, texto)
        QtCore.QMetaObject.connectSlotsByName(Emergente)
        Emergente.show()


    def retranslateUi(self, Emergente, textoEmergente):
        _translate = QtCore.QCoreApplication.translate
        print(textoEmergente)
        Emergente.setWindowTitle(_translate("Emergente", "Mensaje"))
        self.texto.setText(_translate("Emergente", textoEmergente))

    def accionAceptar(self):
        try:
            self.Emergente.close()

        except Exception as e:
            print(e)

