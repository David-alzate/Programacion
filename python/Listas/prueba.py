# Pedir al usuario que ingrese los elementos de la matriz 3x3
matriz = []
for i in range(3):
    fila = []
    for j in range(3):
        elemento = float(input(f"Ingrese el elemento ({i+1},{j+1}): "))
        fila.append(elemento)
    matriz.append(fila)

# Imprimir la matriz original
print("Matriz original:")
for fila in matriz:
    print(fila)

# Escalonar la matriz
for i in range(3):
    # Si el elemento diagonal es cero, intercambiar la fila actual con la siguiente que tenga un elemento no cero en esa columna
    if matriz[i][i] == 0:
        for j in range(i+1, 3):
            if matriz[j][i] != 0:
                matriz[i], matriz[j] = matriz[j], matriz[i]
                break
    # Si el elemento diagonal es distinto de cero, dividir toda la fila por ese elemento para que sea igual a 1
    if matriz[i][i] != 0:
        divisor = matriz[i][i]
        for j in range(i, 3):
            matriz[i][j] /= divisor
    # Restar la fila actual multiplicada por el elemento correspondiente de la fila superior para hacer ceros debajo del elemento diagonal
    for j in range(i+1, 3):
        multiplicador = matriz[j][i]
        for k in range(i, 3):
            matriz[j][k] -= multiplicador * matriz[i][k]

# Imprimir la matriz escalonada
print("Matriz escalonada:")
for fila in matriz:
    print(fila)