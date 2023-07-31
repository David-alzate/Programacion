t=int(input("Defina el tamaño "))
n=int(input("Digite el numero que desea saber los multiplos "))
numeros = [n]

for i in range (1,100):
    if (n % i) == 0:
         numeros.append(i)

print(numeros)




