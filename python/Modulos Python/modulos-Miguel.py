i = ""
z = 0
def sumas():
    print(num1+num2)

def restas():
    print(num1-num2)

def multiplicaciones():
    print(num1*num2)

def divisiones():
    print(num1/num2)

while i != "no":
    num1=float(input("ingrese un numero"))
    num2=float(input("ingrese un numero"))
    menu_principal=print("que desea hacer")
    z=int(input("1-sumar\n2-restar\n3-multiplicar\n4-dividir"))
    if z==1 :
     sumas()
     i = str(input("desea continuar?"))
    elif z==2 :
     restas()
     i = str(input("desea continuar?"))
    elif z==3 :
       multiplicaciones()
       i = str(input("desea continuar?"))
    elif z==4:
       divisiones()
       i = str(input("desea continuar?"))
    
print("hasta luego")



