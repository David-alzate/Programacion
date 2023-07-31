def hola():
    nombre = input("Ingrese su nombre, por favor\n")
    print("¿Como estas?", nombre)
    return

def suma(numero1,numero2):
    return numero1+numero2

suma1 = suma(10,50)
suma2 = suma(100,150)
total = suma1+suma2
print("El resultado es :", total)

def strange_function(n):
    if(n % 2 == 0):
        return True
print(strange_function(2))
print(strange_function(1))

def strange_list_fun(n):
    strange_list = []

    for i in range (0, n):
        strange_list.insert(0, i)

    return strange_list

print(strange_list_fun(5))