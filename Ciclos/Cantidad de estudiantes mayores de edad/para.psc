Algoritmo estudiantes
	Definir i,mayores,edad Como Enteros
	para i<-1 Hasta 10 con paso 1 Hacer
		escribir "Digite la edad del estudiante " i
		leer edad
		si edad >= 18 Entonces
			mayores<-mayores+1
		FinSi
	finPara
	Imprimir "El numero de estudiantes mayores de edad es de " mayores
FinAlgoritmo
