from ventanaPrincipal import *
from ventanaEmergente01 import *
from login import *
from PyQt5 import QtWidgets

class MainWindow(QtWidgets.QMainWindow, VentanaPrincipal):

    def __init__(self, *args, **kwargs):
        QtWidgets.QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        self.bEmergente01.clicked.connect(self.abrirVentana)
        self.bEmergente02.clicked.connect(self.abrirVentana)
        self.bEmergente03.clicked.connect(self.ventanaLogin)
        self.bEmergente04.clicked.connect(self.imprimirConsola)

    def imprimirConsola(self):
        print("MENSAJE POR CONSOLA")

    def abrirVentana(self):
        self.ventanaEmergente01("Ven Emergente 01")

    def ventanaEmergente01(self, textoEmergente):
        self.vEmergente01 = QtWidgets.QMainWindow()
        self.ui = VentanaEmergente01()
        self.ui.setupUi(self.vEmergente01, textoEmergente)
        self.vEmergente01.show()

    def ventanaLogin(self):
        self.ventana = QtWidgets.QMainWindow()
        self.ui = Ui_Login()
        self.ui.setupUi(self.ventana)

if __name__ == "__main__":
    app = QtWidgets.QApplication([])
    window = MainWindow()
    window.show()
    app.exec_()