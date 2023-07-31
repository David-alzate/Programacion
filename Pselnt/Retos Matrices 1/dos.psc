Algoritmo dos
	Definir matriz,sumafila,sumacolumna,i,j Como Entero
	Dimension sumafila[5]
	Dimension sumacolumna[5]
	Dimension matriz[5,5]
	para i <- 1 Hasta 5 con paso 1 Hacer
		para j <- 1 Hasta 5 con paso 1 hacer 
			matriz[i,j]  <- azar(10)
		FinPara
	FinPara
	para i <- 1 Hasta 5 con paso 1 Hacer
		para j <- 1 Hasta 5 con paso 1 hacer 
			sumafila[i] <- sumafila[i] + matriz[i,j]
			sumacolumna[j] <- sumacolumna[j] + matriz[i,j]
		FinPara
	FinPara
	Imprimir "La matriz original es "
	para i <- 1 Hasta 5 con paso 1 Hacer
		para j <- 1 Hasta 5 con paso 1 hacer 
			Escribir Sin Saltar matriz[i,j], " " 
		FinPara
		Escribir " "
	FinPara
	Imprimir ""
	para i <- 1 Hasta 5 con paso 1 Hacer
		Escribir "Suma Fila ", i ": " sumafila[i], "   -   "  " Suma columna ", i ": " sumacolumna[i]
		FinPara
		Escribir " "
FinAlgoritmo
