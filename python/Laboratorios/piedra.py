import sys
import random 

def volver():
    try:
        print("\nDesea volver a jugar\n 1) si \n 2) No")
        respuesta = int(input(""))
        if respuesta == 1:
            menu()
        elif respuesta == 2:
            print("Hasta pronto")
            sys.exit()
        elif respuesta != 1 and respuesta != 2:
            print("Seleccione una opcion correcta")
            volver()
    except ValueError:
        print("Seleccione una opcion correcta")
        volver()


def piedra():
    if user1 == "piedra" and user2 == "piedra":
        print(f"\n {user1} vs {user2} = Empate")
    elif user1 == "piedra" and user2 == "papel":
        print(f"\n {user1} vs {user2} = El jugador 2 es el ganador")
    elif user1 == "piedra" and user2 == "tijeras":
        print(f"\n {user1} vs {user2} = El jugador 1 es el ganador")
    
    volver()
    
def papel():
    if user1 == "papel" and user2 == "papel":
        print(f"\n {user1} vs {user2} = Empate")
    elif user1 == "papel" and user2 == "tijeras":
        print(f"\n {user1} vs {user2} = El jugador 2 es el ganador")
    elif user1 == "papel" and user2 == "piedra":
        print(f"\n {user1} vs {user2} = El jugador 1 es el ganador")
        
    volver()
    
def tijera():
    if user1 == "tijeras" and user2 == "tijeras":
        print(f"\n {user1} vs {user2} = Empate")
    elif user1 == "tijeras" and user2 == "piedra":
        print(f"\n {user1} vs {user2} = El jugador 2 es el ganador")
    elif user1 == "tijeras" and user2 == "papel":
        print(f"\n {user1} vs {user2} = El jugador 1 es el ganador")
    
    volver()
    


def menu():
    print("Bienvenido, Seleccione su respuesta")
    global user2, user1, rest
    try:
        rest = int(input(" 1-) 1 Jugador \n 2-) 2 jugadores"))
        if rest == 1:
            user1 = str(input("Jugador 1\n - Piedra \n - Papel \n - Tijeras \n"))
            user2 = random.randint(1,3)
            if user2 == 1:
                user2 = "piedra"
            elif user2 == 2:
                user2 = "papel"
            elif user2 == 3:
                user2 = "tijeras"
            unjugador()
        elif rest == 2:
            user1 = str(input("Jugador 1\n - Piedra \n - Papel \n - Tijera \n"))
            user2 = str(input("Jugador 2\n - Piedra \n - Papel \n - Tijera \n"))
            dosjugadores()
        else:
            print("\nSeleccione una opcion correcta\n")
            menu()
    except ValueError:
        print("\nSeleccione una opcion correcta\n")
        menu()




def unjugador():
    if user1 == "piedra":
        piedra()
    elif user1 == "papel":
        papel()
    elif user1 == "tijeras":
        tijera()
    elif user1 != "piedra" and user1 != "papel" and user1 != "tijeras":
        print("\nSeleccione una opcion correcta\n")
        menu()
    
    

def dosjugadores():
    if (user1 == "piedra" or user1 == "papel" or user1 == "tijeras") and (user2 == "piedra" or user2 == "papel" or user2 == "tijeras"):
            if user1 == "piedra":
                piedra()
            elif user1 == "papel":
                papel()
            elif user1 == "tijeras":
                tijera()
    else:
        print("\nSeleccione una opcion correcta\n")
        menu()
    
    
    
menu()
