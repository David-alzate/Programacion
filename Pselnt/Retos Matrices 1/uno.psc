Algoritmo uno
	Definir diagonal,i,j Como Entero
	Dimension diagonal[5,5]
	para i <- 1 Hasta 5 con paso 1 Hacer
		para j <- 1 Hasta 5 con paso 1 hacer 
			si i = j Entonces
				diagonal[i,j] <- 1  
			sino 
				diagonal[i,j] <- 0
			FinSi
		FinPara
	FinPara
	para i <- 1 Hasta 5 con paso 1 Hacer
		para j <- 1 Hasta 5 con paso 1 hacer 
			Escribir Sin Saltar diagonal[i,j], " " 
		FinPara
		Escribir " "
	FinPara
FinAlgoritmo
