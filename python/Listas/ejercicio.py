lista = []
for i in range(5):
    lista.append(int(input("Ingrese un numero")))
print(lista)
print(sum(lista))

def list_sum(lst):
    s = 0
    for elem in lst:
        s += elem
    return s
print(list_sum([5, 4, 3]))