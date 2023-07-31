bloques = int(input("Digite el numero de bloques de la piramide"))

# inicializamos dos variables una de altura y otra para controlar la capa 

altura = 0
x = 1

# en el ciclo evaluamos que hallan bloques para hacer la piramide, una vez adentro se va incrementando la altura y la capa de esta y van disminuyendo los bloques por cada capa

while (bloques >= x):
    altura += 1
    bloques -= x
    x += 1

print("La altura de la piramide es de", altura)
