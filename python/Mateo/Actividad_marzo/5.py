# inicializamos la variable de la suma en 0
suma = 0

# Le preguntamos al usuario hasta que numero desea realizar la suma 
numero = int(input("Ingrese el numero hasta el que desea obtener la suma "))

# hacemos el contador for sobre los números desde el 1 hasta el numero ingresado por el usuario
for i in range(1,numero+1):
    # cada vez que pase por el for va a sumar los numeros y los agregara a la variable suma 
    suma = suma + i

# imprimimos en pantalla la suma 
print("La suma de los números del 1 al ", numero, "Es: ",suma)