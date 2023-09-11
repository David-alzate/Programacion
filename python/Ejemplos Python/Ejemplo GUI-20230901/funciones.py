from math import pi, pow


def suma(opeA, opeB):
    resultado = opeA + opeB
    return resultado


def producto(opeA, opeB):
    return opeA * opeB


def areaCirculo(radio):
    print(radio)
    return pi * pow(radio, 2)

def perimetroCirculo(radio):
    return 2 * pi * radio