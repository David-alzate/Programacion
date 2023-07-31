Algoritmo Cuarto
	Definir i,num,suma,nota Como real
	i <- 1
	Mientras i <= 40 Hacer
		Escribir "Ingrese la nota " i
		leer nota
		suma <- suma + nota
		
		si i == 1 Entonces
			baja <- nota
		SiNo
			si nota < baja Entonces
				baja <- nota
			FinSi
		FinSi
		i <- i + 1
	FinMientras
	Imprimir " la media de calificaciones es de: " suma / 40
	Imprimir " La nota mas baja es de : " baja 
	
	
FinAlgoritmo
