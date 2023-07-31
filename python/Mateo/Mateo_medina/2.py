# Algoritmo para imprimir los factores primos de un numero
num = int(input("Ingrese un numero "))
i = 2
while i < num:
    if num % i == 0:
        print(i)
        i += 1
    else:
        i += 1

