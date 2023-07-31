def fibonacci_iterativo(n):
    if n <= 1:
        return n
    else:
        a, b = 0, 1
        for _ in range(2, n + 1):
            a, b = b, a + b
        return b
indice = int(input("Ingrese el índice de Fibonacci deseado: "))
resultado_iterativo = fibonacci_iterativo(indice)
print("Implementación Iterativa - El número de Fibonacci en el índice", indice, "es:", resultado_iterativo)



