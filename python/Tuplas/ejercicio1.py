# funcion para iniciar seccion
def login():
    # Creamos las tuplas con los datos de los usuarios (La posicion del usuario corresponde con la posicion de la contraseña)
    usuario = ("david","santiago","luis", "camilo", "miguel", "laura", "sara")
    contraseña = (123, 1231423, 12312312, 31234234, 1234234, 31234212, 12341234)

    nombre = str(input("Ingrese su usuario "))            #pedimos el nombre de usuario  
    if nombre in usuario :                                # evaluamos con el condicional si el usuario si esta registrado
        password = int(input("Ingrese su contraseña "))   # le pedimos al usuario la contraseña
        x = usuario.index(nombre)                         # agregamos a la variable x la posicion del usuario
        if contraseña[x] == password:                     # evaluamos con el condicional si la contraseña si corresponde al usuario
            print("Iniciaste seccion Correctamente")   
        else:
            print("contraseña incorrecta")                # si la contraseña es incorrectav muestra el texto y le vuelve a pedir los datos 
            login()
    else:
        print("Este nombre de usuario no se encuentra registrado")       #si el nombre de usuario es incorrecta muestra el texto y le vuelve a pedir los datos 
        login()

login()  # llamamos la funcion


    

