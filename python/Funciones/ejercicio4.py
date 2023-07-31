def factorial(num):
    if num > 1:
        num = num * factorial(num-1)
    return num
fac= int(input("Ingrese un numero"))
print(factorial(fac))