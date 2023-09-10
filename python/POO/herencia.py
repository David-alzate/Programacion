class persona:
    def __init__(self, nombre,edad,nacionalidad):
        self.nombre = nombre
        self.edad = edad
        self.nacionalidad = nacionalidad

    def hablar(self):
            print(f"{self.nombre} Esta hablando")

# Herencia simple 

class empleado(persona):
     def __init__(self, nombre, edad, nacionalidad,trabajo,salario):
          super().__init__(nombre, edad, nacionalidad)
          self.trabajo = trabajo
          self.salario = salario

class estudiante(persona):
     def __init__(self, nombre, edad, nacionalidad,notas,grado):
          super().__init__(nombre, edad, nacionalidad)
          self.notas = notas
          self.grado = grado

# Herencia multiple 

class artista:
    def __init__(self, habilidad):
        self.habilidad = habilidad
    
    def mostrarHabilidad(self):
        return (f"mi habilidad es : {self.habilidad}")

class empleadoArtista(empleado,artista):
     def __init__(self, nombre, edad, nacionalidad, trabajo, salario,habilidad,empresa):
          empleado.__init__(self,nombre, edad, nacionalidad, trabajo, salario)
          artista.__init__(self,habilidad)
          self.empresa = empresa
     def presentarse(self):
          print(f"hola soy {self.nombre}, {self.mostrarHabilidad()} y trabajo en {self.trabajo}") 


roberto = empleado("roberto",43,"argentino","Ingeniero",4500000)
santiago = estudiante("santiago",16,"colombiano",43,11)
sara = empleadoArtista("sara",18,"colombiana","programadora",2000000,"bailar","sura")
sara.presentarse()

print(roberto.nombre)
print(santiago.grado)
santiago.hablar() 
roberto.hablar()

