class celular:
    def __init__(self, marca, modelo, camara):
        self.marca = marca
        self.modelo = modelo
        self.camara = camara 
    def llamar (self):
        print(f"Estas haciendo una llamada desde un {self.marca} modelo {self.modelo}")
    


celular1 = celular("samsung", "s23", "48MX")
 
celular1.llamar()