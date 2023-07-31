Algoritmo sin_titulo
	Escribir "¿Cuantas notas va a ingresar?: "
	Leer numNotas
	Dimension notas[numNotas]
	Para i <- 1 Hasta numNotas Hacer
		Escribir "Ingrese la nota",i,":"
		Leer notas[i]
		suma <- suma + notas[i]
	FinPara
	Escribir "La menor nota es: ", baja
	Escribir "El promedio de las notas es: ", suma/numNotas
FinAlgoritmo