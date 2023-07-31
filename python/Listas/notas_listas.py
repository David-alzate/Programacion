# Notas en listas
from lib2to3.pgen2.token import NOTEQUAL


materias = ["Matematicas", "Fisica", "Quimica", "Historia", "lengua"]
nota=[]
for i in range(5):
    nota.append(int(input("Que nota obtuviste en " + materias[i])))
    


for j in range(5):
    print("En ", materias[j], "Has sacado ", nota[j])
