Algoritmo primero
	//definimos las variables como enteras y le damos tamaño al vector
	definir num,pares,impares,i,nums Como real	
	Dimension nums[50]
	Dimension pares[50]
	Dimension impares[50]
	//Preguntamos Los 50 numeros y los agregamos al vector, evaluamos si es par o impar para agregarlos a su vector correspondiente
	i <- 1 
	mientras i <= 50 hacer 
		Escribir "Digite el numero " i
		leer nums[i]
		si nums[i] mod 2 = 0 Entonces
			pares[i] <- nums[i]
		sino 
			impares[i] <- nums[i]
		FinSi
		i <- i + 1 
FinMientras
    //Imprimimos los Numeros pares del Vector, Sin imprimir los 0
Escribir "Los numero pares son "
Para i <- 1 Hasta 50 con paso 1 hacer 
	si pares[i] <> 0 Entonces
		escribir pares[i]
	FinSi
FinPara
//Imprimimos los Numeros pares del Vector, Sin imprimir los 0
Escribir "Los numero impares son "
Para i <- 1 Hasta 50 con paso 1 hacer 
	si impares[i] <> 0 Entonces
		escribir impares[i]
	FinSi
FinPara
FinAlgoritmo


