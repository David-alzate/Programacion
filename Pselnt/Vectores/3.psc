Algoritmo tres
	Definir x Como Entero
	definir nom como cadena
	Escribir "Cual es el tama�o del vector? "
	leer tam
	Dimension x[tam]
	Dimension nom[tam]
	para i<-1 hasta tam Hacer
	Escribir "Cual es el nombre? "
	leer j
	nom[i]<-j
	x[i]<-Longitud(j)
	FinPara
	Para k<-1 hasta tam Hacer
		Escribir x[k] , " ", nom[k]
	FinPara
FinAlgoritmo
