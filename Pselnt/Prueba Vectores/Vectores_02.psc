Algoritmo tabla_de_multiplicar
	Escribir "�Cuantos n�meros desea mostrar?"
	Leer num
	Dimension mult[num]
	Escribir "�De que n�mero desea conocer su tabla de multiplicar?"
	Leer mulNum
	Para i <- 1 Hasta num Con Paso 1 Hacer
		resul <- mulNum * i
		Escribir resul
	 Fin Para
FinAlgoritmo