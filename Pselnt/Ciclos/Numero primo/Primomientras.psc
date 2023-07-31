	Algoritmo Primo
		Definir i,x,m Como Entero
		escribir"ingrese número a evaluar"
		i=1
		leer x
		Mientras i<=x Hacer
		si x mod i=0 Entonces
				m=m+1
			FinSi
			i=i+1
		Fin Mientras
		si m=2 Entonces
			escribir " el numero " ,x, " es primo "
		SiNo
			Escribir " el numero ",x, " no es primo "
					FinSi
FinAlgoritmo