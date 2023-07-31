# Algoritmo para saber que tipo de triangulo es 
lado1 = int(input("Ingrese el lado 1 "))
lado2 = int(input("Ingrese el lado 2 "))
lado3 = int(input("Ingrese el lado 3 "))


if (lado1 == lado2 & lado1 == lado3):
    print("Es un tiengulo equilatero")
elif lado1 == lado2 or lado1 == lado3 or lado2 == lado3:
    print("Es un tiengulo isoceles")
else:
    print("Es un tiengulo escaleno")
