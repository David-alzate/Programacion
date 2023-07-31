a=float(input("ingrese el peso de la esfera A "))
b=float(input("ingerse el peso de la esfera B "))
c=float(input("ingrese el peso de la esfera C "))

if a > b and a > c:
    print("La esfera A es la de mayor peso con ", a, "De peso")
elif b > a and b > c:
    print("La esfera B es la de mayor peso con ", b , "De peso")
else:
    print("La esfera C es la de mayor peso con ", c, "De peso")