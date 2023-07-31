nums = [1,1,2,2,2,2,3,3,4,5,5,5,6,6,7,8,8,8,8,9]   # lista de numeros repetidos 
nums_sinreperidos = []                             # inicilizamos la lista de numeros sin repetir

for i in range(len(nums)):                         # en un ciclo recorremos la lista con la funcion len
    if i == len(nums) - 1 or nums[i] != nums[i + 1]:          # en el condicional evaluamos si el numero siguiente es diferente al anterior
            nums_sinreperidos.append(nums[i])                 # si el numero no se repite lo agregamos a la lista 
  

print(nums_sinreperidos)                  # mostaramos en pantalla el resultado 