import random
import time

pilotos = [
    "M.Verstappen", "S.Perez", "L.Norris", "O.Piastri", "C.Lerclerc", "C.Sainz", 
    "LHamilton", "G.Russell", "F.Alonso", "L.Stroll", "E.Ocon", "P.Gasly", 
    "L.Lawson", "Y.Tsunoda", "G.Zhou", "V.Bottas", "N.Hulkenberg", "K.Magnussen", 
    "A.Albon", "L.Sargeant"
]

equipos = [
    "RED BULL", "RED BULL", "McLaren", "McLaren", "Ferrari", "Ferrari", 
    "Mercedes", "Mercedes", "Aston Martin", "Aston Martin", "Alpine", "Alpine", 
    "Alpha Tauri", "Alpha Tauri", "Alfa Romeo", "Alfa Romeo", "Haas", "Haas", "Williams", "Williams"
]

probabilidadDeAvance = [0.11, 0.09, 0.09, 0.05, 0.09, 0.09, 0.09, 0.05, 0.09, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.05, 0.02, 0.02, 0.02, 0.02]
puntuacion = [25, 18, 15, 12, 10, 8, 6, 4, 2, 1]

km = 300
reporteParcial = km // 4

def carrera():
    distanciaRecorrida = 0
    print("Carrera de Formula 1")
    print(" ")

    reportes = [reporteParcial, reporteParcial * 2, reporteParcial * 3, reporteParcial * 4]
    
    posiciones_pilotos = {piloto: 0 for piloto in pilotos}

    while distanciaRecorrida < km:
        piloto_avance = {}
        for i in range(len(pilotos)):
            numeroAleatorio = random.random()
            if numeroAleatorio <= probabilidadDeAvance[i]:
                distanciaAvanzada = 10
                piloto = pilotos[i]
                if piloto in piloto_avance:
                    distanciaAvanzada += piloto_avance[piloto]
                piloto_avance[piloto] = distanciaAvanzada

        for i, reporte in enumerate(reportes):
            if distanciaRecorrida >= reporte:
                time.sleep(1)
                print(" ")
                print(f"Reporte {i + 1}: Se han recorrido {distanciaRecorrida} km.")
                time.sleep(1)
                print("Posiciones:")
                print(" ")
                posiciones_ordenadas = sorted(posiciones_pilotos.items(), key=lambda x: x[1], reverse=True)[:5]
                for pos, (piloto, distancia) in enumerate(posiciones_ordenadas, start=1):
                    equipo = equipos[pilotos.index(piloto)]
                    print(f"Posición {pos}: {piloto} ({equipo})")
                    time.sleep(1)
                reportes[i] = km + 1

        if piloto_avance:
            for piloto in pilotos:
                if piloto in piloto_avance:
                    distanciaRecorrida += piloto_avance[piloto]
                    posiciones_pilotos[piloto] += piloto_avance[piloto]

    time.sleep(1)
    print(" ")
    print(f"Ganadores de la carrera se han recorrido {distanciaRecorrida} km.")
    time.sleep(1)
    print("Posiciones:")
    print(" ")
    posiciones_ordenadas = sorted(posiciones_pilotos.items(), key=lambda x: x[1], reverse=True)[:10]
    for pos, (piloto, distancia) in enumerate(posiciones_ordenadas, start=1):
        equipo = equipos[pilotos.index(piloto)]
        puntaje = puntuacion[pos - 1] if pos <= len(puntuacion) else 0
        print(f"Posición {pos}: {piloto} ({equipo}) - Puntos: {puntaje}")
        time.sleep(1)

carrera()
