
ingreso = float(input("Digite su Ingreso"))

if ingreso < 85528:
    impuesto = ingreso * 0.18 - 556.02
   
else:
    impuesto = (ingreso - 85528) * 0.32 + 14839.2


impuesto = round(impuesto,0)

print("El valor del impuesto es: ", impuesto)


