# Inicializamos las variables
menores = 0 
mayores = 0 
suma = 0
# Creamos la lista de las temperaturas
temperatura = [20,18,10,17,20,30,12,11,21,23]

# Realizamos la suma de las temperaturas
for i in range(len(temperatura)):    # len(temperatura) nos saca el tamaño de la lista para poder recorrer cada posicion y hacer la suma
    suma = temperatura[i] + suma

# Sacamos el promedio de las temperaturas
promedio = (suma / 10)

# Evaluamos que temperaturas son mayores y cuales son menores al promedio 
for i in range(len(temperatura)):     # len(temperatura) nos saca el tamaño de la lista para poder recorrer cada posicion y hacer la suma
    if temperatura[i] >= promedio:
        mayores += 1
    else:
        menores += 1


# Mostramos en pantalla los resultados 
print("El promedio de las temperaturas es ", promedio)
print("Mayores del promedio hay", mayores)
print("Menores del promedio hay", menores)