Algoritmo buscar_elementos
	Escribir "¿Cuantos elementos va a ingresar?"
	Leer n
	Dimension cant[n]
	Para i <- 1 Hasta n Hacer
		Escribir "Ingrese un elemento"
		Leer elem
		cant[i] <- elem
	FinPara
	Escribir "¿Que elemento va a buscar?"
	Leer bus
	Para k <- 1 Hasta n Hacer
		Si cant[k] == bus Entonces
			Escribir "La posición en la que se encuentra ",bus," es: ",k
		FinSi
	FinPara
FinAlgoritmo