from PyQt5 import QtCore, QtGui, QtWidgets


class VentanaPrincipal(object):
    def setupUi(self, ventanaPrincipal):
        ventanaPrincipal.setObjectName("objetoVentanaPrincipal")
        ventanaPrincipal.resize(186, 330)

        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap("icono.ico"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        ventanaPrincipal.setWindowIcon(icon)

        self.centralwidget = QtWidgets.QWidget(ventanaPrincipal)
        self.centralwidget.setObjectName("centralwidget")

        self.bEmergente01 = QtWidgets.QPushButton(self.centralwidget)
        self.bEmergente01.setGeometry(QtCore.QRect(20, 20, 151, 41))
        self.bEmergente01.setObjectName("bEmergente01")

        self.bEmergente02 = QtWidgets.QPushButton(self.centralwidget)
        self.bEmergente02.setGeometry(QtCore.QRect(20, 70, 151, 41))
        self.bEmergente02.setObjectName("bEmergente02")

        self.bEmergente03 = QtWidgets.QPushButton(self.centralwidget)
        self.bEmergente03.setGeometry(QtCore.QRect(20, 120, 151, 41))
        self.bEmergente03.setObjectName("bEmergente03")

        self.bEmergente04 = QtWidgets.QPushButton(self.centralwidget)
        self.bEmergente04.setGeometry(QtCore.QRect(20, 170, 151, 41))
        self.bEmergente04.setObjectName("bEmergente04")

        ventanaPrincipal.setCentralWidget(self.centralwidget)

        self.retranslateUi(ventanaPrincipal)
        QtCore.QMetaObject.connectSlotsByName(ventanaPrincipal)

    def retranslateUi(self, ventanaPrincipal):
        _translate = QtCore.QCoreApplication.translate
        ventanaPrincipal.setWindowTitle(_translate("objetoVentanaPrincipal", "Principal"))
        self.bEmergente01.setText(_translate("objetoVentanaPrincipal", "Emergente 1"))
        self.bEmergente02.setText(_translate("objetoVentanaPrincipal", "Emergente 2"))
        self.bEmergente03.setText(_translate("objetoVentanaPrincipal", "Emergente 3"))
        self.bEmergente04.setText(_translate("objetoVentanaPrincipal", "Emergente 4"))

