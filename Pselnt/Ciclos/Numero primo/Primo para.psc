Algoritmo Primo
	Definir i,x,m Como Entero
	escribir"ingrese n�mero a evaluar"
	leer x
	para i<-1 hasta x Hacer
		si x mod i=0 Entonces
			m=m+1
		FinSi
	FinPara
	si m=2 Entonces
		Escribir " el n�mero " ,x, " es primo "
	SiNo
		Escribir "el numero " ,x, " no es primo"
	FinSi
FinAlgoritmo
