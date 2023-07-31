nombre = str(input("Ingrese su nombre "))
slbh = int(input("Ingrese su Salario Basico Por hora "))
ht = int(input("Ingrese el el numero de horas trabajadas en el mes "))

salario = (slbh * ht)

if salario > 450000 :
    print("su nombre es ", nombre ,"y su salario es ", salario)
else:
    print("su nombre es ", nombre)
