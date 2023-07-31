Algoritmo segund
	i <- 1
	Repetir
		Escribir "Escribe el numero " i
	    leer num
		si num > 0 Entonces
			positivos <- positivos +1
		SiNo
			negativos <- negativos +1
		FinSi
		
		i <- i + 1
	Hasta Que i > 20
	
	imprimir positivos " Fueron positivos "
	imprimir negativos " Fueron negativos "

FinAlgoritmo
