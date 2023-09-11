import os

from frontend.login.login import Ui_Login
from PyQt5 import QtWidgets
from dotenv import load_dotenv



class MainWindow(QtWidgets.QMainWindow, Ui_Login):

    def __init__(self, *args, **kwargs):
        QtWidgets.QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        self.setWindowTitle("PIZZERIA POO")


if __name__ == "__main__":
    load_dotenv()
    user = os.getenv('user')
    print(user)


    app = QtWidgets.QApplication([])
    window = MainWindow()
    window.show()
    app.exec_()