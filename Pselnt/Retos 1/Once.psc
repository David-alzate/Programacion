Algoritmo Once
	Definir d,t,des Como Entero
	Escribir ("Digite la distancia del viaje en km")
	leer d
	d <- (d+d)
	Escribir ("Digite el tiempo de estadia en dias ")
	leer t
	des <- (d*0.25)
	des <- (des*30)/100
	des <- (d*0.25-des)
	si t > 7 y d > 800 Entonces
		Escribir ("Se aplica un descuanto del 30 % en su boleto, el total a pagar es de: ") (des)
	sino 
		escribir ("EL precio de su boleto es de: ") (d*0.25)
	FinSi
	
	
FinAlgoritmo
