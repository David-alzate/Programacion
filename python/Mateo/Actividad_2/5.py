# Algoritmo para saber si un numero es primo o compuesto
num = int(input("Ingresa un número "))

if num < 2:
    print("El número no es ni primo ni compuesto")
else:
    for i in range(2, num):
        if num % i == 0:
            print("El número es compuesto")
            break
    else:
        print("El número es primo")