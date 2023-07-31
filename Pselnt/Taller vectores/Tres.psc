Algoritmo Tres
	// Definimos las variables y le damos tamaño al vector
	Definir num,n,nums,a,temp Como real
	Definir respuesta como caracter
	Escribir "Digite el tamaño del vector "
	leer n
	Dimension nums[n]
	//Preguntamos Los numeros y los agregamos al vector
	i <- 1 
	Mientras i <= n Hacer
		Escribir "Digite el numero " i
		leer num
		nums[i] <- num
	i <- i + 1 
FinMientras
// preguntamos de que manera desea el vector y evaluamos en un condicional 
Escribir "Ingrese de que manera quiere ordenar el vector - asendente o desendente"
leer respuesta
si respuesta = "asendente" Entonces
	// Hacemos el intercambio de posicion en el vector de manera asendente con el metodo de la burbuja
para i <- 1 hasta n-1 con paso 1 hacer 
	para a <- 1 hasta n-1 con paso 1 hacer 
		si nums[a] > nums[a+1] Entonces
			temp <- nums[a]
			nums[a] <- nums[a+1]
			nums[a+1] <- temp
		FinSi
	FinPara
FinPara
imprimir "El vector de forma asendente es "
para i <- 1 hasta n con paso 1 Hacer
	Escribir nums[i] 
FinPara
SiNo
	// Hacemos el intercambio de posicion en el vector de manera desendente con el metodo de la burbuja
	para i <- 1 hasta n-1 con paso 1 hacer 
		para a <- 1 hasta n-1 con paso 1 hacer 
			si nums[a] < nums[a+1] Entonces
				temp <- nums[a]
				nums[a] <- nums[a+1]
				nums[a+1] <- temp
			FinSi
		FinPara
	FinPara
	imprimir "El vector de forma asendente es "
	para i <- 1 hasta n con paso 1 Hacer
		Escribir nums[i] 
	FinPara
FinSi
FinAlgoritmo
