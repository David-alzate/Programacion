import time

def contador_regresivo(num):
    num = num -1
    if num > 0:
        time.sleep(2)
        print(num)
        contador_regresivo(num)
    else:
        time.sleep(2)
        print("Fin Del Programa")
        

contador_regresivo(10)
