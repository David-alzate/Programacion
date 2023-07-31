Algoritmo siete
	// Definimos las variables y le damos tamaño al vector
	Definir ventas,cantidad,precio,suma,billetes,monedas,n Como Entero
	Definir mil,dos,cinco,diez,veinte,cincuenta,cien,moneda50,moneda100,moneda200,moneda500,moneda1000 Como Entero
	Definir producto Como caracter
	Escribir "Digite el numero de ventas que se realizaron "
	leer n
	Dimension producto[n],cantidad[n],precio[n]
	// Pedimos los datos de cada venta 
	i <- 1 
	Mientras i <= n Hacer
		Escribir "Digite el producto de la venta numero " i
		leer producto[i]
		Escribir "Digite la cantidad de la venta numero " i
		leer cantidad[i]
		Escribir "Digite el precio total de de la venta numero " i
		leer precio[i]
		suma <- suma + precio[i]
		// Evaluamos el Tipo de billete que se entrego 
		mil <- 0
		dos <- 0 
		cinco <- 0
		diez <- 0 
		veinte <- 0
		cincuenta <- 0 
		cien <- 0 
		moneda50 <- 0
		moneda100 <- 0
		moneda200 <- 0 
		moneda500 <- 0
		moneda1000 <- 0
		respuesta <- "si"
		billetes <- 0
		monedas <- 0
		mientras respuesta <> "no" hacer 
		Escribir "¿Que tipo de billete entrego? (Seleccione el numero)" 
		Escribir "1 - De Mil"
		Escribir "2 - De Dos Mil"
		Escribir "3 - De Cinco MIl"
		Escribir "4 - De Diez Mil"
		Escribir "5 - De veinte Mil"
		Escribir "6 - De cincuenta Mil"
		Escribir "7 - De cien Mil"
		Escribir "8 - Entrego Monedas"
		leer billetes
		
		si billetes = 1 Entonces
			Escribir "¿Cuantos Billetes de Mil entrego?"
			leer mil 
		SiNo
			si billetes = 2 Entonces
				Escribir "¿Cuantos Billetes de Dos Mil entrego?"
				leer dos 
			SiNo
				si billetes = 3 Entonces
					Escribir "¿Cuantos Billetes De Cinco MIl entrego?"
					leer cinco
				SiNo
					si billetes = 4 Entonces
						Escribir "¿Cuantos Billetes De Diez Mil entrego?"
						leer diez
					SiNo
						si billetes = 5 Entonces
							Escribir "¿Cuantos Billetes De veinte Mil entrego?"
							leer veinte
						SiNo
							si billetes = 6 Entonces
								Escribir "¿Cuantos Billetes De cincuenta Mil entrego?"
								leer cincuenta
							SiNo
								si billetes = 7 Entonces
									Escribir "¿Cuantos Billetes De cien Mil entrego?"
									leer cien
								SiNo
									si billetes = 8 Entonces
										Escribir "¿Que tipo de moneda entrego? (Seleccione el numero)" 
										Escribir "1 - De 50"
										Escribir "2 - De 100"
										Escribir "3 - De 200"
										Escribir "4 - De 500"
										Escribir "5 - De 1000"
										leer monedas
	    FinSi
	       FinSi
	           FinSi
                  FinSi
                      FinSi
						FinSi
					       FinSi
							  finsi
		// Evaluamos el tipo de moneda que se entrego
				si monedas = 1 Entonces
					Escribir "¿Cuantos monedas de 50 entrego?"
					leer moneda50
				SiNo
					si monedas = 2 Entonces
						Escribir "¿Cuantos monedas de 100 entrego?"
						leer moneda100
					SiNo
						si monedas = 3 Entonces
							Escribir "¿Cuantos monedas de 200 entrego?"
							leer moneda200
						SiNo
							si monedas = 4 Entonces
								Escribir "¿Cuantos monedas de 500 entrego?"
								leer moneda500
							SiNo
								si monedas = 5 Entonces
									Escribir "¿Cuantos monedas de 1000 entrego?"
									leer moneda1000
									
								FinSi
							FinSi
						FinSi
					FinSi
				Finsi
Escribir "¿Entrego mas billetes o monedas? (SI O NO)"
leer respuesta
    FinMientras
    i <- i + 1 
    FinMientras
     // imprimimos los billetes y monedas que quedan en caja, el total de todas las ventas y hacemos un resumen de ventas imprimiendo los vectores 
Imprimir "Billetes "
   Escribir "mil :" mil
   Escribir "dos mil :" dos
   Escribir "cinco mil :" cinco
   Escribir "diez mil :" diez
   Escribir "veinte mil :" veinte
   Escribir "cincuenta mil :" cincuenta
   Escribir "cien mil :" cien
Imprimir ""
Imprimir "Monedas"
   Escribir "50 :" moneda50
   Escribir "100 :" moneda100
   Escribir "200 :" moneda200
   Escribir "500 :" moneda500
   Escribir "1000 :" moneda1000
Imprimir ""
   Escribir "El Total vendido fue de :" suma
Imprimir ""
   Escribir "Resumen de Ventas :"
   para i <- 1 hasta n con paso 1 hacer 
	   Escribir "Venta numero " i
	   Escribir "Producto : " producto[i]
	   Escribir "cantidad : " cantidad[i]
	   Escribir "precio Total : " precio[i]
FinPara
FinAlgoritmo