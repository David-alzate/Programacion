# Pedir al usuario los números límite
num1 = int(input("Ingrese el primer número: "))
num2 = int(input("Ingrese el segundo número: "))

# Inicializar las variables de suma para pares e impares
suma_pares = 0
suma_impares = 0

# Iterar sobre los números entre num1 y num2
for num in range(num1, num2+1):
    # Verificar si es par o impar y sumar a la variable correspondiente
    if num % 2 == 0:
        suma_pares += num
    else:
        suma_impares += num

# Mostrar los resultados
print("La suma de los números pares entre", num1, "y", num2, "es:", suma_pares)
print("La suma de los números impares entre", num1, "y", num2, "es:", suma_impares)