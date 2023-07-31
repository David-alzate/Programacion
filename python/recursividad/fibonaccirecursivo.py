def fibonacci_recursivo(n):
    if n <= 1:
        return n
    else:
        return fibonacci_recursivo(n - 1) + fibonacci_recursivo(n - 2)
indice = int(input("Ingrese el índice de Fibonacci deseado: "))

resultado_recursivo = fibonacci_recursivo(indice)
print("Implementación Recursiva - El número de Fibonacci en el índice", indice, "es:", resultado_recursivo)


