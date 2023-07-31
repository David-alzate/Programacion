Algoritmo dos
	definir n, num Como Entero
	Escribir "Cuantos multiplos desea saber? "
	leer n
	Escribir "Cual número desea saber ?"
	leer num
	Dimension total[n]
		Para i<-1 hasta n Hacer
		total[i]<-num*i
	FinPara
	Para j<-1 hasta n Hacer
		escribir total[j]
	FinPara
FinAlgoritmo
