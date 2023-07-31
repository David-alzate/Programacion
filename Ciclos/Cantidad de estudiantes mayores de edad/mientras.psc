Algoritmo estudiantes
	Definir mayores,edad,cont Como Enteros
	cont <- 0
	Mientras cont < 10 hacer 
		i <- 1
		Mientras i <= 10 hacer
			escribir "Digite la edad del estudiante " i
		i<-i+1
	  Leer edad
	   cont<-cont+1
	   si edad >= 18 Entonces
		   mayores<-mayores+1
	   FinSi
        FinMientras
    FinMientras
	 Imprimir "El numero de estudiantes mayores de edad es de " mayores
FinAlgoritmo

