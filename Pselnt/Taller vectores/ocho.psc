Algoritmo ocho
	// Definimos las variables y le damos tamaño al vector
	Definir num,num1,n,suma,resta,multiplicacion,division Como Entero
	escribir "Digite cuantas operaciones desea realizar "
	leer n
	n <- n*2
	Dimension num[n],num1[n] 
	// pedimos los datos para realizar las operaciones 
	i <- 1 
	mientras i <= n hacer
		Escribir "Digite el numero con el que desea realizar la operacion numero " i
		leer num[i]
		Escribir "Digite el otro numero con el que desea realizar la operacion numero " i
		leer num1[i]
	i <- i + 1 
FinMientras
//evaluamos la operacion que se desea realizar dependiendo de la posicion del vector y imprimimos el resultado
i <- 1 
Mientras i <= n Hacer
	Escribir "Digite que operacion desea realizar en la posicion numero  ", i , " (Suma, resta, multiplicacion, division)"
	leer operacion
	si operacion = "suma" Entonces
		suma <- num[i]+num1[i]
		Escribir "La suma de ",num[i] " y ", num1[i] " Es " suma
		Imprimir ""
	sino 
		si operacion = "resta" Entonces
			resta <- num[i]-num1[i]
			Escribir "La resta de ",num[i] " y ", num1[i] " Es " resta
			Imprimir ""
	sino 
		si operacion = "multiplicacion" Entonces
			multiplicacion <- num[i]*num1[i]
			Escribir "La multiplicacion de ",num[i] " y ", num1[i] " Es " multiplicacion
			Imprimir ""
		sino 
			si operacion = "division" Entonces
				division <- num[i]*num1[i]
				Escribir "La division de ",num[i] " y ", num1[i] " Es " division
				Imprimir ""
			  FinSi
			FinSi
		FinSi
	FinSi
i <- i + 1
FinMientras
FinAlgoritmo
