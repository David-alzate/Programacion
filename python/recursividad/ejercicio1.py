# inicioalizamos las variables
num = 0                         
contraseña = 777 
#funcion que pida la contraseña
def par(num):
    num = int(input("Ingrese la contraseña "))    # Se Pide que se ingrese la contraseña al usuario
    if num != contraseña:                         # Condicional que evalua si la contraseña ingresada por el usuario es diferente a la contraseña
        par(num)                                  # si la contraseña es diferente se llama la funcion nuevamente 
    else:
        print("contraseña correcta")              # Si la contraseña es la misma se imprime en pnatalla Contraseña correcta y finaliza el programa

par(num)  
        


