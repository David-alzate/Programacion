import math

a = float(input("Ingrese a "))
b = float(input("Ingrese b "))
c = float(input("Ingrese c "))



x1 = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
x2 = (-b - math.sqrt(b**2 - 4*a*c)) / (2*a)

print("Las soluciones de la ecuación son:", x1, "y", x2)