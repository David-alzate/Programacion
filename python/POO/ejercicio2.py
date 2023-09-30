# Ejercicio de herencia 

class persona:
    def __init__(self, nombre,edad):
        self.nombre = nombre
        self.edad = edad

    def mostrarDatos(self):
        print(f"El nombre de la persona es {self.nombre} y la edad es {self.edad}")


class estudiante(persona):
    def __init__(self, nombre, edad,grado):
        super().__init__(nombre, edad)
        self.grado = grado

    def mostrarGrado(self):
        print(f"El grado de la persona es {self.grado}")


estudiante1 = estudiante("David",18,11)
estudiante1.mostrarDatos()
estudiante1.mostrarGrado()
