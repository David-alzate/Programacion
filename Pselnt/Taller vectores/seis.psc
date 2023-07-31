Algoritmo seis
	// Definimos las variables y le damos tamaño al vector
	Definir num,i,id,dia,mes,año como entero
	Definir nombre,apellido Como Caracter
	Escribir "Digite el numero de personas que son"
	leer n 
	Dimension 	id[n],nombre[n],apellido[n],dia[n],mes[n],año[n]
	// Ingresamos los datos de los usuarios y los almacenamos en los vectores
	para i <- 1 hasta n con paso 1 hacer 
		Escribir "Digite la identidicacion de la persona " i 
		leer id[i]
	FinPara
	para i <- 1 hasta n con paso 1 hacer 
		Escribir "Digite el nombre de la persona " i 
		leer nombre[i]
	FinPara
	para i <- 1 hasta n con paso 1 hacer 
		Escribir "Digite el apellido de la persona " i 
		leer apellido[i]
	FinPara
	para i <- 1 hasta n con paso 1 hacer 
		Escribir "Digite el dia de nacimiento de la persona " i 
		leer dia[i]
	FinPara
	para i <- 1 hasta n con paso 1 hacer 
		Escribir "Digite el mes de nacimiento de la persona " i 
		leer mes[i]
	FinPara
	para i <- 1 hasta n con paso 1 hacer 
		Escribir "Digite el año de nacimiento de la persona " i 
		leer año[i]
	FinPara
	// Se imprime la informacion de los usuarios
	para i <- 1 Hasta n con paso 1 Hacer
		escribir Mayusculas(nombre[i]) Mayusculas(apellido[i])  (id[i]mod 1000) "-" dia[i] mes[i] año[i]
	FinPara
FinAlgoritmo
