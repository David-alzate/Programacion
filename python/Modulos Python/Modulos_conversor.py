x = 0
y = ""
def convertir_dolares_pesos ():
        dolares = float(input("Digite cuantos dolares desea convertir "))
        respuesta = round(dolares * 4.790, 2)
        print (respuesta)
    
def convertir_pesos_dolares ():
        pesos = float(input("Digite cuantos pesos  desea convertir "))
        respuesta = round(pesos * 0.00021, 2)
        print (respuesta)

while y != "no":
    print("Menu Seleccione lo que desea hacer")
    x = int(input("1)- Convertir de Dolares a Pesos \n2)- Convertir de Pesos a Dolares"))
    
    

    if x == 1 :
        convertir_dolares_pesos ()
        y = str(input("¿Desea Continuar Convirtiendo?"))
      
       
    elif x ==2:
        convertir_pesos_dolares ()
        y = str(input("¿Desea Continuar Convirtiendo?"))
    
    elif y == "si":
        print ("adios")
        
print ("Adios")

