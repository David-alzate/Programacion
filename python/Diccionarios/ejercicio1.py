# Login con diccionario
def login():
    # Creamos el diccionario con los datos de los usuarios
    usuario = {"david": 123,
               "santiago": 1231423,
               "luis": 31234234, 
               "camilo": 1234234, 
               "miguel": 31234212, 
               "laura": 1231234123, 
               "sara": 12341234
}

    nombre = str(input("Ingrese su usuario ")).lower()            #pedimos el nombre de usuario  
    if nombre in usuario:                                # evaluamos con el condicional si el usuario si esta registrado
        password = int(input("Ingrese su contraseña "))   # le pedimos al usuario la contraseña
        x = usuario.get(nombre)                       # agregamos a la variable x la contraseña del usuario ingresado
        if x == password:                     # evaluamos con el condicional si la contraseña ingresada si corresponde al usuario
            print("Iniciaste seccion Correctamente")   
        else:
            print("contraseña incorrecta")                # si la contraseña es incorrecta muestra el texto y le vuelve a pedir los datos 
            login()
    else:
        print("Este nombre de usuario no se encuentra registrado")       #si el nombre de usuario es incorrecta muestra el texto y le vuelve a pedir los datos 
        login()

login()  # llamamos la funcion


    

