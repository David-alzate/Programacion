import os
if os.path.exists("Juegos") == True:
    print("El directorio ya existe")
else:
    os.mkdir("Juegos")
    print("Directorio creado")
          
size = os.stat("Juegos").st_size
print("El tamaño del directorio es: ", size)