# programa que pide numeros al usuario hasta que se ingrese un numero impar
# inicializamos la variable num
num = 0 
#funcion que le pide los numeros al usuario hasta que ingrese un numero par
def par(num):
    try:
        num = int(input("ingrese un numero"))  # le pide al usuario un numero
        if num % 2 == 0:   # evalua con el condicional si el numero es par
            par(num)     # llama la funcion nuevamente si el numero es par 
        else:
            print("Fin del programa")              # si el numero ingresado por el usuario es impar finaliza el programa
    except ValueError:                             # si ocurre un error con el valor ingresado ingresa al except
        print("Tiene que ingresar un numero entero positivo")        
        par(num)                                   # llama nuevamente la funcion 
            

par(num)    #se llama la funcion