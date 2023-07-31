Algoritmo cuatro
	// Definimos las variables y le damos tamaño al vector
	Definir num,i,nums,suma como real
	Dimension 	nums[100]
	i <- 1 
	// Preguntamos Los numeros y evaluamos la suma de los numeros
	Mientras i <= 100 Hacer
		Escribir "Digite el numero " i
		leer num
		nums[i] <- num
		suma <- suma + nums[i]
		i <- i + 1 
	FinMientras
	// imprimimos la suma de vectores, el promedio y evaluamos los numeros que estan por encima de la media 
	Escribir "La suma de los vectores es " suma
	Escribir "EL promedio de los numeros es  " suma/100
	Escribir "Los numeros que estan por encime de la media son: "
	para i <- 1 Hasta 100 con paso 1 Hacer
		si nums[i] > suma/100 Entonces
			Escribir nums[i]
		FinSi
	FinPara
FinAlgoritmo
