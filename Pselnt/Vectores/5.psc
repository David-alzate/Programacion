Algoritmo Quinto

	Definir tama�o Como real
	Definir PLlenar Como Caracter
	tama�o <- 100
		si tama�o > 0 y tama�o - abs(tama�o) = 0 Entonces
		Dimension VectorN[tama�o]
		NumeroU<-1
		i<-1
		Mientras NumeroU <>0 Hacer
			Escribir "Ingresar el valor que tendra la posici�n #" i
			Leer NumeroU
			VectorN[i]= NumeroU
			i<-i+1
		Fin Mientras
			SiNo
				Escribir 'Error palabra'
			FinSi
		para i = 1 Hasta tama�o Hacer
			min <- i 	
			Para j = i + 1 Hasta tama�o Con Paso 1 Hacer           
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
		Para i = 1 Hasta tama�o Hacer
			si VectorN[i] <> 0 Entonces
				Escribir 'En la posici�n #',i,' tenemos ',VectorN[i]
			SiNo
				Escribir ""
			FinSi
		FinPara
		
FinAlgoritmo
