Algoritmo nombres
	Escribir "¿Cuantos nombres desea ingresar?"
	Leer n
	Dimension names[n]
	Dimension long[n]
	Para i <- 1 Hasta n Con Paso 1 Hacer
		Escribir "Ingrese un nombre"
		Leer name
		names[i] <- name
		long[i] <- Longitud(name)
	Fin Para
	Para j <- 1 Hasta n Con Paso 1 Hacer
		Escribir names[j]
		Escribir long[j]
	Fin Para
FinAlgoritmo