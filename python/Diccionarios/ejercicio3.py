import sys

usuario = {"david": 123,
               "santiago": 1231423,
               "luis": 31234234, 
               "camilo": 1234234, 
               "miguel": 31234212, 
               "laura": 1231234123, 
               "sara": 12341234
               }


def menu():
    print("\n Bienvenido \n Seleccione lo que desea hacer \n 1) Iniciar Seccion \n 2) Registrarse")
    respuesta = int(input(" "))
    if respuesta == 1:
        login()
    elif respuesta == 2:
        registrarse()
    else:
        print("\n Seleccione una opcion correcta \n")
        menu()
        
          
def login():
    nombre = str(input("Ingrese su usuario \n")).lower()            
    if nombre in usuario:                                
        password = int(input("Ingrese su contraseña \n"))   
        x = usuario.get(nombre)                      
        if x == password:                     
            print("Iniciaste seccion Correctamente \n")
            volver()   
        else:
            print("contraseña incorrecta \n")               
            login()
    else:
        print("Este nombre de usuario no se encuentra registrado \n")      
        login()
    
    

def volver():
    respuesta = int(input("Desea volver al menu \n 1) si \n 2) No \n"))
    if respuesta != 1 and respuesta != 2:
        print("seleccione una opcion correcta \n")
        volver()
    elif respuesta == 1:
        menu()
    else:
        print("Adios")
        sys.exit()
            
    
def registrarse():
    user = str(input("Ingrese un nombre de usuario "))
    if user in usuario:
        print("El nombre de usuario ya esta registrado \n")
        registrarse()
    

    passw = int(input("Ingrese una contraseña "))
    usuario.update({user : passw})
    menu()

    
menu()