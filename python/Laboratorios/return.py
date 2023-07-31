n  = ""
def año(year):
    if (year % 4 == 0):
        return True
    else: 
        return False

while n != "no":
    year = (int(input("Ingrese el año")))
    print(año(year))
    n = (str(input("Desea continuar")))