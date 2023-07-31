Algoritmo Cuarto
	Definir i,num,suma,nota Como real
	para i <- 1 Hasta 40 con paso 1 hacer 
		Escribir "Digite la nota numero " i
		leer nota
		suma <- suma + nota 
		
		si i == 1 Entonces
			baja <- nota
		SiNo
			si nota < baja Entonces
				baja <- nota
			FinSi
		FinSi
	FinPara
	
	Imprimir "La media de calificaciones de grupo fue de: " suma / 40
	Imprimir "La nota mas baja del grupo fue de: " baja 
FinAlgoritmo
