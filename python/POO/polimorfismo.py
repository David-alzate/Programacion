class animal():
    def sonido(self):
        pass

class gato(animal):

    def sonido(self):
        return "Miau"
    
class perro(animal):

    def sonido(self):
        return "Guau"
    
def hacerSonido(animal):
    print(animal.sonido())

gato = gato()
perro = perro()

hacerSonido(gato)

