# inicializamos las variables 
expo = 1 
po = 1 
# funcion que calcula las potencias del 2 hasta el 10
def potencia(expo):
    global po  # ponemos la variable po como global
    po = po * 2   # operacion para calcular la potencia
    print(f"2 a la potencia de {expo} es {po}")   # imprimimos en pantalla en resultado 
    
    expo = expo + 1     # aumentamos la variable expo de a 1 
    if expo < 10+1:     # condicional para evaluar hasta que numero queremos la potencia
        potencia(expo)   # llamamos la funcion 
        
    

potencia(expo)