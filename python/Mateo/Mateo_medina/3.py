# Ingreso de los números a y b
a = int(input("Ingrese el numero 1 "))
b = int(input("Ingrese el numero 2 "))


# Suma de los divisores propios de a
suma_divisores_a = 0
for i in range(1, a):
    if a % i == 0:
        suma_divisores_a += i

# Suma de los divisores propios de b
suma_divisores_b = 0
for i in range(1, b):
    if b % i == 0:
        suma_divisores_b += i

# Comprobar si son amigos
if suma_divisores_a == b and suma_divisores_b == a:
    print(a, "y", b, "son amigos")
else:
    print(a, "y", b, "no son amigos")