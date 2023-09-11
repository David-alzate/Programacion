from principal import *
from emergente import Ui_Emergente
from login.login import Ui_Login
from login.login2 import Ui_Login2
from PyQt5 import QtCore, QtGui, QtWidgets

from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *

class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):

    def __init__(self, *args, **kwargs):
        QtWidgets.QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        self.bEmergente01.clicked.connect(self.abrirVentana)
        self.bEmergente02.clicked.connect(self.abrirVentana)
        self.bEmergente03.clicked.connect(self.ventanaLogin)
        self.bEmergente04.clicked.connect(self.ventanaLogin2)

    def abrirVentana(self):
        self.ventanaEmergente("HOLA")

    def ventanaEmergente(self, textoEmergente):
        self.ventana = QtWidgets.QMainWindow()
        self.ui = Ui_Emergente()
        self.ui.setupUi(self.ventana, textoEmergente)
        self.ventana.show()

    def ventanaLogin(self):
        self.ventana = QtWidgets.QMainWindow()
        self.ui = Ui_Login()
        self.ui.setupUi(self.ventana)
        self.ventana.show()

    def ventanaLogin2(self):
        self.ventana = QtWidgets.QMainWindow()
        self.ui = Ui_Login2()
        self.ui.inicializar_GUI(self.ventana)




if __name__ == "__main__":
    app = QtWidgets.QApplication([])
    window = MainWindow()
    window.show()
    app.exec_()