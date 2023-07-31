numeros=[]
def lee_numero(numeros):
    for x in range (5):
        numeros.append(int(input("Escribe un número:")))
    print(numeros)
lee_numero(numeros)
print("\n")
def mayor():
    if numeros[0]==numeros[1] or numeros[0]==numeros[2] or numeros[2]==numeros[1] or numeros[2]==numeros[1]==numeros[0]:
            mayorrep=max(numeros)
            print("Se repite algún número, pero el que mayor valor tiene es", mayorrep)
    else:
        mayor= max(numeros)
        print("El número con mayor valor de los tres, ha sido el {}".format(mayor))
mayor()