a = float(input("Ingrese el valor de a: "))
b = float(input("Ingrese el valor de b: "))
c = float(input("Ingrese el valor de c: "))

if a + b > c and a + c > b and b + c > a:
    print("Los valores ingresados forman un triángulo")
    
    if a == b == c:
        print("El triángulo es equilátero")
    elif a == b or a == c or b == c:
        print("El triángulo es isósceles")
    else:
        print("El triángulo es escaleno")
        
    s = (a + b + c) / 2
    area = (s * (s - a) * (s - b) * (s - c)) ** 0.5
    print("El área del triángulo es:", area)
else:
    print("Los valores ingresados no forman un triángulo")