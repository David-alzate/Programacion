class estuduante:
    def __init__(self, nombre,edad,grado):
        self.nombre = nombre
        self.edad = edad
        self.grado = grado

    def estudiar(self):
        print("estudiando...")

nombre = input("Nombre: ")
edad = input("edad: ")
grado = input("grado: ")

estudiante = estuduante(nombre,edad,grado)

print(f"Nombre: {estudiante.nombre}\nedad: {estudiante.edad}\ngrado: {estudiante.grado}")

estudiar = input()
if (estudiar.lower() == "estudiar"):
    estudiante.estudiar()
