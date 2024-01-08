class Persona:
    def __init__(self, nombre, edad):
        self.__nombre = nombre
        self.edad = edad

    def getNombre(self):
        return self.__nombre
    
    def setNombre(self, newNombre):
        self.__nombre = newNombre


david = Persona("David", "18")
nombre = david.getNombre()
print(nombre)

david.setNombre("Santiago")

nombre = david.getNombre()
print(nombre)