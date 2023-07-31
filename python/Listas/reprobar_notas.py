# repetir asignaturas
asignaturas = ["Matemoscas","Física","Español","Química", "Ed. Física"]
notas= []
for i in asignaturas:
    cal= float(input("Diga cuanto saco en "+i))
    notas.append(cal)

for i in range(5):
    if notas[i] <=2.9:
        print("Tienes que repetir por gei el curso de "+asignaturas[i])