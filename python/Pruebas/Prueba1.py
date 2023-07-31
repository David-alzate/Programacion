def maquina():
    producto = {"A1": "Papas",
                "A2": "Jugo"
               }
    
    precios = {"Papas": 5000,
               "Jugo": 2500
       
    }

    print("Los productos son ")
    for i in producto:
     print(producto[i], "->", i)

    sel = str(input("Seleccione el producto que desea sacar de la maquina \n")).upper()
    if sel in producto:
       prod = producto.get(sel)
       precio = precios.get(prod)
       print(f"EL precio de {prod} es {precio} ingrese el dinero")
       dinero = int(input())
    else:
       print("\nSeleccione una opcion correcta \n")
       maquina()

       
    
    if dinero > precio:
       cambio = (dinero - precio)
       print(f"su cambio es {cambio}")
       print("El producto ha salido correctamente ")
    elif dinero <  precio:
       print("El dinero ingresado no es suficiente ")
       maquina()
    elif dinero == precio:
       print("El producto ha salido correctamente ")
    
     


maquina()