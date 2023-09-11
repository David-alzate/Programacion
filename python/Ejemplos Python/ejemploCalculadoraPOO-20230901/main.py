import sys
from PyQt5 import uic
from PyQt5.QtWidgets import QMainWindow, QApplication



class EjemploGUI(QMainWindow):
    def __init__(self):
        super().__init__()
        uic.loadUi("C:/Users/alzat/Documents/Ejemplos Python/ejemploCalculadoraPOO-20230901/ventana.ui", self)
       # self.btCalcular.clicked.connect(self.sumaAB)
        self.boton9.clicked.connect(self.escribir)
        self.boton8.clicked.connect(self.escribir)
        self.boton7.clicked.connect(self.escribir)
        self.boton6.clicked.connect(self.escribir)
        self.boton5.clicked.connect(self.escribir)
        self.boton4.clicked.connect(self.escribir)
        self.boton3.clicked.connect(self.escribir)
        self.boton2.clicked.connect(self.escribir)
        self.boton1.clicked.connect(self.escribir)
        self.boton0.clicked.connect(self.escribir)
        #self.botonBorrar.clicked.connect(borrarLCD)
        self.pantalla.display("45")

    def sumaAB(self):
        pass
        a = int(self.valorA.text())
        b = int(self.valorB.text())
        resultado = a + b
        self.resultado.setText(str(resultado))

    def concatenar(self):
        self.pantalla.display("hola")

        pass

    def mostrarLCD(self):
        pass

    def escribir(self):
        try:
            global cadena
            sender = self.sender()
            cadena = str(cadena) + sender.text()
            self.pantalla.display(str(cadena))
        except Exception as e:
            print(e)


if __name__ == '__main__':
    cadena = ""
    funcion = 0
    valor = 0
    app = QApplication(sys.argv)
    GUI = EjemploGUI()
    GUI.show()
    sys.exit(app.exec_())