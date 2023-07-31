binario = input("Ingrese un número binario de 5 dígitos: ")

if len(binario) != 5:
    print("El número ingresado no tiene 5 dígitos")
else:
    valor_decimal = 0
    for i in range(len(binario)):
        if binario[i] == "1":
            valor_decimal += 2 ** (4 - i)

    print("El valor decimal equivalente es:", valor_decimal)