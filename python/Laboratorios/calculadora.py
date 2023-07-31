import tkinter as tk

# Funciones de los botones y operaciones

def button_click(number):
    current = display.get()
    display.delete(0, tk.END)
    display.insert(tk.END, current + str(number))

def button_clear():
    display.delete(0, tk.END)

def button_equal():
    expression = display.get()
    result = eval(expression)
    display.delete(0, tk.END)
    display.insert(tk.END, result)

# Colores
bg_color = "#303030"  # Color de fondo oscuro
btn_bg_color = "#606060"  # Color de fondo de los botones
btn_fg_color = "#FFFFFF"  # Color de texto de los botones (blanco)
btn_active_bg_color = "#A0A0A0"  # Color de fondo de los botones al presionarlos (gris claro)

# Crear la ventana principal
window = tk.Tk()
window.title("Calculadora")
window.configure(bg=bg_color)  # Establecer el color de fondo de la ventana

# Establecer la ventana en modo pantalla completa
window.attributes('-fullscreen', True)

# Crear la caja de texto
display = tk.Entry(window, width=15, justify="right", font=("Arial", 28))
display.grid(row=0, column=0, columnspan=4, padx=10, pady=(10, 5), sticky="nsew")  # Ajuste de padx y pady para el cuadro de texto
display.configure(bg=bg_color)  # Establecer el color de fondo del cuadro de texto
display.insert(tk.END, "0")
display.icursor(tk.END)
display.configure(justify="center")

# Crear los botones numéricos
buttons = [
    ("7", 7), ("8", 8), ("9", 9),
    ("4", 4), ("5", 5), ("6", 6),
    ("1", 1), ("2", 2), ("3", 3),
    ("0", 0), ("C", "C"), ("=", "=")
]

row = 1
col = 0

for button_text, button_value in buttons:
    if button_text == "C":
        button = tk.Button(window, text=button_text, padx=20, pady=20, bg=btn_bg_color, fg=btn_fg_color, activebackground=btn_active_bg_color, command=button_clear)
    elif button_text == "=":
        button = tk.Button(window, text=button_text, padx=20, pady=20, bg=btn_bg_color, fg=btn_fg_color, activebackground=btn_active_bg_color, command=button_equal)
    else:
        button = tk.Button(window, text=button_text, padx=20, pady=20, bg=btn_bg_color, fg=btn_fg_color, activebackground=btn_active_bg_color, command=lambda value=button_value: button_click(value))
    button.grid(row=row, column=col, padx=5, pady=5, sticky="nsew")
    col += 1
    if col > 2:
        col = 0
        row += 1

# Crear los botones de operaciones
operators = [
    ("+", "+"), ("-", "-"), ("*", "*"), ("/", "/")
]

row = 1
col = 3

for operator_text, operator_value in operators:
    operator_button = tk.Button(window, text=operator_text, padx=20, pady=20, bg=btn_bg_color, fg=btn_fg_color, activebackground=btn_active_bg_color, command=lambda value=operator_value: button_click(value))
    operator_button.grid(row=row, column=col, padx=5, pady=5, sticky="nsew")
    row += 1

# Configurar las opciones de geometría de las filas y columnas
for i in range(6):
    window.grid_rowconfigure(i, weight=1)
for j in range(4):
    window.grid_columnconfigure(j, weight=1)

# Iniciar el bucle principal de la aplicación
window.mainloop()