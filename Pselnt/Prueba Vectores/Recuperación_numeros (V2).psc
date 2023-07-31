Algoritmo Recuperación_numeros
	Definir a, b, c, d, e, aux, x, contadorpar, contadorimpar, contadorprimo Como Entero
	Escribir "Ingrese todos los 5 valores"
	Leer a, b, c, d, e
	Repetir
		Si a > b Entonces
			aux = a
			a = b
			b = aux
		FinSi
		Si b > c Entonces
			aux = b
			b = c
			c = aux
		FinSi
		Si c > d Entonces
			aux = c
			c = d
			d = aux
		FinSi
		Si d > e Entonces
			aux = d
			d = e
			e = aux
		FinSi
	Hasta Que a < b y b < c y c < d y d < e
	Escribir e
	Escribir d
	Escribir c
	Escribir b
	Escribir a
	
	temporal = e
	cant_digitos = 0
	Mientras temporal > 0 Hacer
		digito = temporal%10
		temporal = (temporal-digito)/10
		cant_digitos = cant_digitos + 1
	FinMientras
	Escribir "El número " e " tiene " cant_digitos " digitos"
	
	temporal = d
	cant_digitos = 0
	Mientras temporal > 0 Hacer
		digito = temporal%10
		temporal = (temporal-digito)/10
		cant_digitos = cant_digitos + 1
	FinMientras
	Escribir "El número " d " tiene " cant_digitos " digitos"
	
	temporal = c
	cant_digitos = 0
	Mientras temporal > 0 Hacer
		digito = temporal%10
		temporal = (temporal-digito)/10
		cant_digitos = cant_digitos + 1
	FinMientras
	Escribir "El número " c " tiene " cant_digitos " digitos"
	
	temporal = b
	cant_digitos = 0
	Mientras temporal > 0 Hacer
		digito = temporal%10
		temporal = (temporal-digito)/10
		cant_digitos = cant_digitos + 1
	FinMientras
	Escribir "El número " b " tiene " cant_digitos " digitos"
	
	temporal = a
	cant_digitos = 0
	Mientras temporal > 0 Hacer
		digito = temporal%10
		temporal = (temporal-digito)/10
		cant_digitos = cant_digitos + 1
	FinMientras
	Escribir "El número " a " tiene " cant_digitos " digitos"
	
	contadorpar = 0
	contadorimpar = 0
	Si a mod 2 = 0 Entonces
		contadorpar = contadorpar + 1
	SiNo
		contadorimpar = contadorimpar + 1
	FinSi
	Si b mod 2 = 0 Entonces
		contadorpar = contadorpar + 1
	SiNo
		contadorimpar = contadorimpar + 1
	FinSi
	Si c mod 2 = 0 Entonces
		contadorpar = contadorpar + 1
	SiNo
		contadorimpar = contadorimpar + 1
	FinSi
	Si d mod 2 = 0 Entonces
		contadorpar = contadorpar + 1
	SiNo
		contadorimpar = contadorimpar + 1
	FinSi
	Si e mod 2 = 0 Entonces
		contadorpar = contadorpar + 1
	SiNo
		contadorimpar = contadorimpar + 1
	FinSi
	Escribir "Los números pares son: " contadorpar
	Escribir "Los números impares son: " contadorimpar
	
	contadorprimo = 0
	acont<-0
	bcont<-0
	ccont<-0
	dcont<-0
	econt<-0
	i<-1
	Mientras i<=a Hacer
		Si a mod i=0
			acont=acont+1
		FinSi
		i=i+1
	Fin Mientras
	Si acont = 2 Entonces
		contadorprimo = contadorprimo + 1
	FinSi
	Mientras i<=b Hacer
		Si b mod i=0
			bcont=bcont+1
		FinSi
		i=i+1
	Fin Mientras
	Si bcont = 2 Entonces
		contadorprimo = contadorprimo + 1
	FinSi
	Mientras i<=c Hacer
		Si c mod i=0
			ccont=ccont+1
		FinSi
		i=i+1
	Fin Mientras
	Si ccont = 2 Entonces
		contadorprimo = contadorprimo + 1
	FinSi
	Mientras i<=d Hacer
		Si d mod i=0
			dcont=dcont+1
		FinSi
		i=i+1
	Fin Mientras
	Si dcont = 2 Entonces
		contadorprimo = contadorprimo + 1
	FinSi
	Mientras i<=e Hacer
		Si e mod i=0
			econt=econt+1
		FinSi
		i=i+1
	Fin Mientras
	Si econt = 2 Entonces
		contadorprimo = contadorprimo + 1
	FinSi
	Si acont = 2 Entonces
		contadorprimo = contadorprimo +1
	FinSi
	Si abcont = 2 Entonces
		contadorprimo = contadorprimo +1
	FinSi
	Si ccont = 2 Entonces
		contadorprimo = contadorprimo +1
	FinSi
	Si dcont = 2 Entonces
		contadorprimo = contadorprimo +1
	FinSi
	Si econt = 2 Entonces
		contadorprimo = contadorprimo +1
	FinSi
	Escribir "Los números primos son: " contadorprimo
	
	promedio = (a+b+c+d+e)/5
	Escribir "El promedio de los 5 números es: " promedio
	
	suma = a+b+c+d+e
	Escribir "La suma de los 5 números es: " suma
FinAlgoritmo