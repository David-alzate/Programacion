from pickle import FALSE
import random
import string

lista = [101, 'a', [True, random.randint(10,100)],'Esteban', random.choice(string.ascii_letters)]
print(lista)

print(lista[2][1],lista[4])

lista[3]= "Juana"
print(lista)


lista[2][0] = False
print (lista)

sublista = lista[2]
print(sublista)

saltando = lista[2:4:2]
saltando[0:1]= random.choice(string.ascii_letters),random.randint(100,1000)
print(saltando)

total = sublista+saltando
print(total)
