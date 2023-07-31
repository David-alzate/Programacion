Algoritmo tres
	Definir marco,i,j Como Entero
	Dimension marco[5,15]
	para i <- 1 Hasta 5 con paso 1 Hacer
		para j <- 1 Hasta 15 con paso 1 hacer 
			si i = 1 o i = 5 o j = 1 o j = 15 Entonces
				marco[i,j] <- 1  
			sino 
				marco[i,j] <- 0
			FinSi
		FinPara
	FinPara
	para i <- 1 Hasta 5 con paso 1 Hacer
		para j <- 1 Hasta 15 con paso 1 hacer 
			Escribir Sin Saltar marco[i,j], " " 
		FinPara
		Escribir " "
	FinPara
FinAlgoritmo
