Algoritmo Quinto

	Definir tamaño Como real
	Definir PLlenar Como Caracter
	tamaño <- 100
		si tamaño > 0 y tamaño - abs(tamaño) = 0 Entonces
		Dimension VectorN[tamaño]
		NumeroU<-1
		i<-1
		Mientras NumeroU <>0 Hacer
			Escribir "Ingresar el valor que tendra la posición #" i
			Leer NumeroU
			VectorN[i]= NumeroU
			i<-i+1
		Fin Mientras
			SiNo
				Escribir 'Error palabra'
			FinSi
		para i = 1 Hasta tamaño Hacer
			min <- i 	
			Para j = i + 1 Hasta tamaño Con Paso 1 Hacer           
				Si VectorN[j] < VectorN[min] Entonces		
					min = j			
				Fin Si	
			FinPara       
			temporal = VectorN[i]
			VectorN[i] = VectorN[min]
			VectorN[min] = temporal
		FinPara
		Escribir 'Los elmentos del vector son: '
		Escribir ''
		Para i = 1 Hasta tamaño Hacer
			si VectorN[i] <> 0 Entonces
				Escribir 'En la posición #',i,' tenemos ',VectorN[i]
			SiNo
				Escribir ""
			FinSi
		FinPara
		
FinAlgoritmo
