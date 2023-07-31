import random
import string
#Operaciones que no modifican una lista
lista = [101, 'a', [True, random.randint(10,100)], 'Esteban', random.choice(string.ascii_letters)]
print(len(lista))
lista = [1000, 100, random.randint(10,100), random.randint(10,100),500,100]
print(min(lista))
print(max(lista))
print(lista.index(max(lista)))
print(sum(lista))
print(100 in lista)
print(lista.index(500))
print(lista.count(100))
lista1 = [True,False,True,True,100]
print(all(lista1))
print(any(lista1))

#Operaciones que modifican una lista

print(lista + lista1)
lista1.append(lista)
print(lista1)
lista1.insert(5,'OMG')
print(lista1)
lista1.remove(100)
print(lista1)
lista1.pop(1)
print(lista1)
lista.sort()
print(lista)
lista.reverse()
print(lista)