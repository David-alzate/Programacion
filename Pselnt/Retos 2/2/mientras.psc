Algoritmo segund
	Definir i,num,positivos,negativos Como Entero
	i <- 1
	Mientras i <= 20 Hacer
		Escribir "Escribe el numero " i
	    leer num
		si num > 0 Entonces
			positivos <- positivos +1
		SiNo
			negativos <- negativos +1
		FinSi
		i <- i + 1
	Fin Mientras
	imprimir positivos " Fueron positivos "
	imprimir negativos " Fueron negativos "
FinAlgoritmo
