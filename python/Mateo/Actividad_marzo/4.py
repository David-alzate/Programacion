dato1 = float(input("Ingrese el primer dato: "))
dato2 = float(input("Ingrese el segundo dato: "))
dato3 = float(input("Ingrese el tercer dato: "))
dato4 = float(input("Ingrese el cuarto dato: "))

mayor = dato1
if dato2 > mayor:
    mayor = dato2
if dato3 > mayor:
    mayor = dato3
if dato4 > mayor:
    mayor = dato4

print("El mayor de los cuatro datos es:", mayor)