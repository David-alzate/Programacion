#Algoritmo numero factorial subprograma recursivo
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)

n = int(input("Ingrese un valor para calcular su factorial: "))
print(n,"  Factorial es igual a: ",factorial(n))

