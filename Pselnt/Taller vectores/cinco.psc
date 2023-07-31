Algoritmo cinco
	// Definimos las variables y le damos tamaño al vector
	Definir num2,i,nums,num,multiplicacion como real
	Escribir "DIgite el tamaño de los vectores"
	leer n
	Dimension 	nums[n]
	dimension nums2[n]
	Dimension multiplicacion[n]
	// Preguntamos Los numeros del primer vector
	i <- 1 
	Mientras i <= n Hacer
		Escribir "Digite el numero ", i , " Del primer vector"
		leer num
		nums[i] <- num
		i <- i + 1 
	FinMientras
	// Preguntamos Los numeros del primer vector
	i <- 1 
	Mientras i <= n Hacer
		Escribir "Digite el numero ", i , " Del segundo vector"
		leer num
		nums2[i] <- num
		i <- i + 1 
	FinMientras
	// Evaluamos la multiplicacion de los vectores y la imprimirmos en cada posicion 
	para i <- 1 hasta n con paso 1 Hacer
		multiplicacion[i] <- (nums[i]*nums2[i])
		imprimir "La multiplicacion de los vectores en la posicion ", i , " Es " multiplicacion[i]
    FinPara
	
FinAlgoritmo
