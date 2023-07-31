import tkinter as tk


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

    nom = str(nombre.get())                        #pedimos el nombre de usuario  
    if nom in usuario:                                # evaluamos con el condicional si el usuario si esta registrado
        passw = int(password.get())     # le pedimos al usuario la contraseña
        x = usuario.get(nom)                       # agregamos a la variable x la contraseña del usuario ingresado
        if x == passw:                     # evaluamos con el condicional si la contraseña ingresada si corresponde al usuario
             mensaje.configure(text = "Iniciaste seccion Correctamente")   
        else:
            mensaje.configure(text = "contraseña incorrecta")                # si la contraseña es incorrecta muestra el texto y le vuelve a pedir los datos 
            
    else:
        mensaje.configure(text = "Este nombre de usuario no se encuentra registrado")       #si el nombre de usuario es incorrecta muestra el texto y le vuelve a pedir los datos 
        

    
    
ventana = tk.Tk()
ventana.attributes('-fullscreen', True)
ventana.title("login")
ventana.config(bg="#F5DC76")

texto = tk.Label(text="Ingresa tu usuario", font=("Tahoma", 50), bg="#F5DC76")
texto.place(x=400, y=100)
nombre = tk.Entry(width=100)
nombre.place(x=400, y=200)

texto = tk.Label(text="Ingresa tu contraseña", font=("Tahoma", 40), bg="#F5DC76")
texto.place(x=400, y=250)
password = tk.Entry(width=100)
password.place(x=400, y=350)

boton = tk.Button(text="Comprobar", command=login, font=("Tahoma", 20), bg="#F5DC76")
boton.place(x=400, y=420)


mensaje = tk.Label(text="", font=("Tahoma", 25), bg="#F5DC76")
mensaje.place(x=400, y=500)


ventana.mainloop()  
