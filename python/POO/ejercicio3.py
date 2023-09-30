# Ejercicio de herencia multiple y MRO

class animal:
    def comer(self):
        print("El animal esta comiendo ")

class mamifero(animal):
    def amamantar(self):
        print("El animal esta amamantando")

class ave(animal):
    def volar(self):
        print("El animal esta volando ")

class murcielago(mamifero,ave):
    pass

murcielago = murcielago()
murcielago.comer()
murcielago.amamantar()
murcielago.volar()

    