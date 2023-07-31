def busqueda_secuencial(lista, valor):
    """"
    Busca el valor en la linea y devuelve su indice si lo encuentra, o -1 si no esta presente.
    """
    for i in range(len(lista)):
        if lista[i] == valor:
            return i
    return -1

#Ejemplo de uuso
numeros = [2,5,8,10,13,15,18,20]
buscado = 13
indice = busqueda_secuencial(numeros, buscado)
if indice != -1:
    print(f"El valor {buscado} se encuentra en el indice {indice}")
else:
    print(f"El valor {buscado} no se encuentra en la lista")
