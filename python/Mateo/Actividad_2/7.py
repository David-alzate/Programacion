# Algoritmo para calcular el factorial de un numero
num = int(input("Introduce un número: "))

factorial = 1
for i in range(1, num + 1):
    factorial = factorial * i

print("El factorial es", factorial)