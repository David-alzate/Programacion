import sys
from PyQt5 import uic
from PyQt5.QtWidgets import QMainWindow, QApplication
import funciones

class EjemploGUI(QMainWindow):
    def __init__(self):
        super().__init__()
        uic.loadUi("C:/Users/alzat/Documents/Ejemplos Python/Ejemplo GUI-20230901/ventana.ui", self)
        self.botonActivar.clicked.connect(self.perimetro)
        self.botonDesactivar.clicked.connect(self.area)


    def sumaAB(self):
        resultado = funciones.suma(int(self.operandoA.toPlainText()), int(self.operandoB.toPlainText()))
        self.resultado.setText(str(resultado))

    def productoAB(self):
        self.resultado.setText(str(funciones.producto(int(self.operandoA.toPlainText()),
                                                  int(self.operandoB.toPlainText()))))

    def area(self):
        area = funciones.areaCirculo(float(self.operandoA.toPlainText()))
        print(area)
        self.resultado.setText(str(area))

    def perimetro(self):
        perimetro = funciones.perimetroCirculo(float(self.operandoB.toPlainText()))
        print(perimetro)
        self.resultado.setText(str(perimetro))

if __name__ == '__main__':
    app = QApplication(sys.argv)
    GUI = EjemploGUI()
    GUI.show()
    sys.exit(app.exec_())