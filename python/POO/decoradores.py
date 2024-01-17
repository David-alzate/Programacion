def decorador(funcion):
    def funcionModificada():
        print("antes de llamar a la funcion")
        funcion()
        print("Despues de llamar a la funcion")
    return funcionModificada

# def saludo():
#     print("Hola")

# saludoModificado = decorador(saludo)
# saludoModificado()

@decorador
def saludo():
    print("Hola como estas")

saludo()
    