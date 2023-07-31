# Programa que realiza la suma de los 100 primeros numeros
# inicializamos la variable suma en 0
suma = 0
# funcion que realiza la suma de los 100 primeros numeros
def numeros(num):
    global suma   # ponemos la variable suma como global
    suma = num + suma  # a la variable suma le agregamos el numero la cual lo sumara hasta llegar a 100
    num = num + 1   # vamos incrementando el num para que tenga un limite
    if num < 100+1:  # condicional que llama la funcion hasta que el numero llegue a 100
        numeros(num)
        
numeros(0)   # llamamos la funcion desde el numero 0 
print(suma)  # mostramos la suma en pantalla 