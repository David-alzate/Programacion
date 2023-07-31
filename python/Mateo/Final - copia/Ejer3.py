tarifa_gramo = float(input("Ingrese la tarifa por gramo del producto: "))            # Le preguntamos al usuario la tarifa por gramo 
cantidad_productos = int(input("Ingrese la cantidad de productos vendidos: "))       # Le preguntamos al usuario la cantidad de productos vendidos 

for i in range(cantidad_productos):                                                  # En un ciclo recorremos las veces de los productos vendidos 
    peso_kg = float(input("Ingrese el peso del producto en kilogramos: "))           # Le preguntamos al usuario el peso en Kg
    peso_dg = float(input("Ingrese el peso del producto en decagramos: "))           # Le preguntamos al usuario el peso en decagramos
    peso_g = float(input("Ingrese el peso del producto en gramos: "))                # Le preguntamos al usuario el peso en gramos

    peso_total_gramos = (peso_kg * 1000) + (peso_dg * 10) + peso_g                   # Calculamos el peso total de gramos con los datos ingresados 
    costo_total = tarifa_gramo * peso_total_gramos                                   # Calculamos el costo total

    print("El peso del producto en gramos es :", peso_total_gramos,"g")              # imprimimos en pantalla el peso total del producto en gramos
    print("El costo total del producto es :", costo_total, "pesos")                  # imprimimos en pantalla en costo toral del producto en pesos
