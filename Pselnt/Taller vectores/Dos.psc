Algoritmo Dos
	//Definimos las variables como enteras y le damos tamaño al vector
	Definir nums,invertido,i,n Como real
	Escribir "Ingrese el tamaño del vector"
	leer n
	Dimension nums[n]
	//Preguntamos Los numeros y los agregamos al vector
	i <- 1 
	Mientras i <= n hacer
		Escribir "Digite el numero " i
		leer num
		nums[i] <- num 
	i <- i + 1
	FinMientras
	// Imprimimos el vector original
	Escribir "El vector original es"
	para i<-1 Hasta n con paso 1 hacer 
		Escribir nums[i]
	FinPara
	// Evaluamos el contador de manera desendente hasta que llega a 0 y imprimimos los numeros
	i <- n 
	Escribir "El vector invertido es"
	mientras i = n  y i <> 0 Hacer
		Escribir nums[i]
		n <- n - 1 
		i <- i - 1 
	FinMientras
FinAlgoritmo
