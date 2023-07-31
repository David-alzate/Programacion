Algoritmo estudiantes
	Definir i,mayores,edad Como Enteros
	cont <- 0
	
	Repetir
		i <- 1
		repetir 
			escribir "Digite la edad del estudiante " i
			i<-i+1	
		
	Leer edad
	   cont<-cont+1
	   
	   si edad >=18 Entonces
		   mayores <- mayores +1
	   FinSi
   Hasta Que i > 10
      Hasta Que cont >= 10
	  
 Imprimir edad
 


 imprimir "El numero de estudiantes mayores de edad es de " mayores
FinAlgoritmo
