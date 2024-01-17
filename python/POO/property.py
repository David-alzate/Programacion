class Persona:
    def __init__(self,nombre,edad):
        self._nombre = nombre
        self._edad = edad

    @property
    def nombre(self):
        return self._nombre
    
    @nombre.setter
    def nombre(self, newNombre):
        self._nombre = newNombre

    @nombre.deleter
    def nombre(self):
        del self._nombre
        

david = Persona("David",19)

nombre = david.nombre
print(nombre)

david.nombre = "Pepe"

nombre = david.nombre
print(nombre)


