from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_MainWindow(object):

    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(186, 270)
        self.centralwidget = QtWidgets.QWidget(MainWindow)
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

        self.bEmergente05 = QtWidgets.QPushButton(self.centralwidget)
        self.bEmergente05.setGeometry(QtCore.QRect(20, 220, 151, 41))
        self.bEmergente05.setObjectName("bEmergente05")
        MainWindow.setCentralWidget(self.centralwidget)

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "Principal"))
        self.bEmergente01.setText(_translate("MainWindow", "Emergente 1"))
        self.bEmergente02.setText(_translate("MainWindow", "Emergente 2"))
        self.bEmergente03.setText(_translate("MainWindow", "Emergente 3"))
        self.bEmergente04.setText(_translate("MainWindow", "Emergente 4"))
        self.bEmergente05.setText(_translate("MainWindow", "Emergente 5"))
