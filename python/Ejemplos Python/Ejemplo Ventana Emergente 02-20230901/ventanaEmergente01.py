from PyQt5 import QtCore, QtGui, QtWidgets

class VentanaEmergente01(object):
    def setupUi(self, ventanaEmergente, texto):
        ventanaEmergente.setObjectName("Emergente")
        ventanaEmergente.resize(259, 109)

        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap("icono.ico"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        ventanaEmergente.setWindowIcon(icon)

        self.centralwidget = QtWidgets.QWidget(ventanaEmergente)
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

        ventanaEmergente.setCentralWidget(self.centralwidget)
        self.statusbar = QtWidgets.QStatusBar(ventanaEmergente)
        self.statusbar.setObjectName("statusbar")
        ventanaEmergente.setStatusBar(self.statusbar)

        self.retranslateUi(ventanaEmergente, texto)
        QtCore.QMetaObject.connectSlotsByName(ventanaEmergente)

    def retranslateUi(self, ventanaEmergente, textoEmergente):
        _translate = QtCore.QCoreApplication.translate
        ventanaEmergente.setWindowTitle(_translate("Emergente", "Mensaje"))
        #self.texto.setText(_translate("Emergente", "Archivo codificado\ncon éxito"))
        self.texto.setText(_translate("Emergente", textoEmergente))

    def escribir(self, texto):
        print(texto)
        textoEmergente = texto
        print(textoEmergente)
        self.retranslateUi(self, self.ventanaEmergente)

