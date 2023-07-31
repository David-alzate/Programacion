# funcion para el Menu 

def menu():
    print("Seleccione la operacion que desea hacer ")
    print("1. Sumar")
    print("2. Restar")
    print("3. Multiplicar")
    print("4. Dividir")
    global num1,num2,opcion
    opcion = input("Ingrese su opción (1/2/3/4): ")
    num1 = float(input("Ingrese el primer número: "))
    num2 = float(input("Ingrese el segundo número: "))

# funcion para la suma
def suma(a,b):
    return a + b

# funcion para la resta
def resta(a,b):
     return a - b

# funcion para la multiplicacion   
def multiplicacion(a,b):
    return a * b

#funcion para la division
def division(a,b):
    return a / b

print("Bienvenido a mi calculadora")

# ciclo para que el usuario pueda hacer varias operaciones si lo desea 
while True:
    menu()  # llamamos la funcion menu

    # Evaluamos la opcion que eligio el usuario llamamos la funcion y la imprimimos 
    if opcion == '1':
        print(num1, "+", num2, "=", suma(num1, num2))

    elif opcion == '2':
        print(num1, "-", num2, "=", resta(num1, num2))

    elif opcion == '3':
        print(num1, "*", num2, "=", multiplicacion(num1, num2))

    elif opcion == '4':
         if num2 == 0: # evaluamos que la division no sea entre cero
             print("No se puede realizar divison entre 0")
         else:
             print(num1, "*", num2, "=", division(num1, num2))
    
    # preguntamos al usuario si desea hacer otra operacion 
    reiniciar = input("¿Desea hacer otra operación? (s/n): ")
    # evaluamos que la respuesta si sea correcta con .lower para que evalue tanto mayuscula como minuscula 
    if reiniciar.lower() != 's' and reiniciar.lower() != 'n':
       # ciclo hasta que ingrese un valor valido 
       while reiniciar.lower() != 's' and reiniciar.lower() != 'n':
           print("Ingrese una opcion valida")
           reiniciar = input("¿Desea hacer otra operación? (s/n): ")
    # si el usuario desea continuar utilizamos continue para que se vuelva a reiniciar el ciclo
    elif reiniciar.lower() == 's':
        continue
    # si el usuario desea salir utilizamos break para que se salga del ciclo
    elif reiniciar.lower() == 'n':
        break
    

print("¡Gracias por utilizar la calculadora!")