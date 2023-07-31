lista = list()


class Alumnos:
    def __init__(self):
        self.matricula=()
        self.nombre=("")
        self.edad=()
        self.carrera=("")
def menu():
    seleccion=0
    while seleccion!= 4:
        print("Bienvenidos a la aplicacion de registro de alumnos de la UCO")
        print("ALGORITMOS3.3")
        print("elija una de las opciones")
        print("--------------------------------------------------------------------------")
        print("1.Registrar el alumno")
        print("2.Mostrar los alumnos registrados")
        print("3.Buscar un alumno")
        print("4.Salir")
        seleccion = int(input("Elija una opcion: "))
        if seleccion == 1:
            registrar()
        if seleccion == 2:
            mostrar()
        if seleccion == 3:
            buscar()
        if seleccion == 4:
            salir()
def registrar():
    print("Esta es la funcion de registro")
    alumno = Alumnos()
    alumno.matricula=(input("Introduce la matricula: "))
    alumno.nombre=input("Introduce el nombre: ")
    alumno.edad=(input("Introduce la edad: "))
    alumno.carrera=input("Introduce la carrera que cursa: ")
    lista.append(alumno)

def mostrar():
    print("Esta es la funcion para mostrar alumnos registrados")
    for alumno in lista:
        print("El nombre del alumno es: ",alumno.nombre,"de matricula",alumno.matricula,"con edad de",alumno.edad,"años, que cursa la carrera de",alumno.carrera,)


def buscar():
    print("Esta es la funcion para buscar un alumno")
    busqueda=input("Ingrese la matricula o el nombre del alumno")
    for alumno in lista:
        if alumno.matricula == busqueda or alumno.nombre == busqueda:
            print(alumno.nombre,"-",alumno.matricula,"-",alumno.edad,"-",alumno.carrera)
def salir():
    print("Gracias por usar nuestra aplicación")
#------------------------------------------------------------------------------------
menu()
