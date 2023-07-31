import tkinter as tk
secret_number = 777

def evaluar_numero():
    user_number = int(numero.get())
    print(user_number)
    if user_number != secret_number:
        mensaje.configure(text="Estas atrapado en mi bucle")
        mensaje2.configure(text="ingresa otro numero")
    else:
        mensaje.configure(text=f"{secret_number} ES EL NUMERO CORRECTO")
        mensaje2.configure(text="FELICITACIONES")
        ventana.after(3000, ventana.destroy)

    numero.delete(0, tk.END)

# Crear la ventana principal
ventana = tk.Tk()
ventana.attributes('-fullscreen', True)
ventana.title("Bingo")
ventana.config(bg="#F5DC76")

# texto
texto = tk.Label(text="INGRESA UN NUMERO", font=("Tahoma", 50), bg="#F5DC76")
texto.place(x=400, y=100)

# Crear un campo de entrada para el número
numero = tk.Entry(width=100)
numero.place(x=400, y=220)

# Crear un botón para verificar el número
boton = tk.Button(text="Comprobar", command=evaluar_numero, font=("Tahoma", 20), bg="#F5DC76")
boton.place(x=400, y=270)

# etiquetas para mostrar los mensajes
mensaje = tk.Label(text="", font=("Tahoma", 25), bg="#F5DC76")
mensaje.place(x=400, y=360)
mensaje2 = tk.Label(text="", font=("Tahoma", 25), bg="#F5DC76")
mensaje2.place(x=400, y=400)

# Mostrar la ventana
ventana.mainloop()  
