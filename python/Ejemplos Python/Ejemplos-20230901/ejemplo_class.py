class edificacion:
    altura = 0
    dueno = ""
    precio = 0.0
    ubicacion = ""

    def __init__(self, altura, dueno, precio, ubicacion):
        self.altura = altura
        self.dueno = dueno
        self.precio = precio
        self.ubicacion = ubicacion

    def retornarAltura(self):
        return self.altura

    def retornarDueno(self):
        return self.dueno

    def retornarPrecio(self):
        return self.precio

    def retornarUbicacion(self):
        return self.ubicacion

class casa(edificacion):
    habitantes = 0

    def __init__(self, altura, dueno, precio, ubicacion, habitantes):
        super().retornarAltura()
        super().retornarDueno()
        super().retornarPrecio()
        super().retornarUbicacion()
        self.habitantes = habitantes

    def retornarHabitantes(self):
        return self.habitantes



edificio = edificacion(150, "Juan", 1000, "Rionegro")
edificio2 = edificacion(1500, "Camilo", 5000, "Marinilla")
edificio3 = edificacion(50, "Andres", 6000, "La Ceja")
casa1 = casa(150, "Juan", 1000, "Rionegro",4)

print(casa1.retornarUbicacion())
print(casa1.retornarHabitantes())
print(edificio.retornarAltura())
print(edificio2.retornarDueno())