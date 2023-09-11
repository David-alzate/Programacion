# -*- coding: utf-8 -*-

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_Emergente(object):
    def setupUi(self, Emergente, texto):
        Emergente.setObjectName("Emergente")
        Emergente.resize(267, 109)

        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap("icono.ico"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        Emergente.setWindowIcon(icon)

        self.centralwidget = QtWidgets.QWidget(Emergente)
        self.centralwidget.setObjectName("centralwidget")

        self.texto = QtWidgets.QLabel(self.centralwidget)
        self.texto.setGeometry(QtCore.QRect(20, 20, 231, 71))
        font = QtGui.QFont()
        font.setPointSize(16)
        font.setBold(True)
        font.setWeight(100)
        self.texto.setFont(font)
        self.texto.setAlignment(QtCore.Qt.AlignCenter)
        self.texto.setObjectName("texto")

        Emergente.setCentralWidget(self.centralwidget)
        self.statusbar = QtWidgets.QStatusBar(Emergente)
        self.statusbar.setObjectName("statusbar")
        Emergente.setStatusBar(self.statusbar)

        self.retranslateUi(Emergente, texto)
        QtCore.QMetaObject.connectSlotsByName(Emergente)

    def retranslateUi(self, Emergente, textoEmergente):
        _translate = QtCore.QCoreApplication.translate
        Emergente.setWindowTitle(_translate("Emergente", "Mensaje"))
        #self.texto.setText(_translate("Emergente", "Archivo codificado\ncon éxito"))
        self.texto.setText(_translate("Emergente", textoEmergente))

    def escribir(self, texto):
        print(texto)
        textoEmergente = texto
        print(textoEmergente)
        self.retranslateUi(self, Emergente)

