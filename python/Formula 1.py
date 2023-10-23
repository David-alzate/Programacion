import random
import time

# Definición de la clase "Piloto" para representar a los pilotos de Fórmula 1
class Piloto:
    def __init__(self, nombre, equipo, probabilidad_de_avance):
        """
        Inicializa un objeto Piloto con nombre, equipo y probabilidad de avance.

        Args:
        - nombre (str): Nombre del piloto.
        - equipo (str): Equipo al que pertenece el piloto.
        - probabilidad_de_avance (float): Probabilidad de que el piloto avance en una iteración.
        """
        self.nombre = nombre
        self.equipo = equipo
        self.probabilidad_de_avance = probabilidad_de_avance
        self.distancia_recorrida = 0

# Definición de la clase "CarreraF1" para simular carreras de Fórmula 1
class CarreraF1:
    def __init__(self, pilotos, distancia_total, reportes_parciales, puntuacion):
        """
        Inicializa una carrera de Fórmula 1 con pilotos, distancia total, puntos de informe parcial y puntuación.

        Args:
        - pilotos (list): Lista de objetos Piloto que participarán en la carrera.
        - distancia_total (int): Distancia total de la carrera en kilómetros.
        - reportes_parciales (list): Lista de distancias en las que se generarán informes parciales.
        - puntuacion (list): Puntuación otorgada a los pilotos al final de la carrera.
        """
        self.pilotos = pilotos
        self.distancia_total = distancia_total
        self.reportes_parciales = reportes_parciales
        self.puntuacion = puntuacion

    def avanzar_pilotos(self):
        """
        Simula el avance de los pilotos en una iteración de la carrera.

        Returns:
        - piloto_avance (dict): Un diccionario que contiene el avance de cada piloto en kilómetros.
        """
        piloto_avance = {}
        for piloto in self.pilotos:
            numero_aleatorio = random.random()
            if numero_aleatorio <= piloto.probabilidad_de_avance:
                distancia_avanzada = 10
                if piloto.nombre in piloto_avance:
                    distancia_avanzada += piloto_avance[piloto.nombre]
                piloto_avance[piloto.nombre] = distancia_avanzada
        return piloto_avance

    def realizar_carrera(self):
        """
        Simula una carrera de Fórmula 1 y muestra informes parciales y resultados finales.
        """
        distancia_recorrida = 0
        print("Carrera de Formula 1")
        print(" ")

        posiciones_pilotos = {piloto.nombre: 0 for piloto in self.pilotos}

        while distancia_recorrida < self.distancia_total:
            piloto_avance = self.avanzar_pilotos()

            for i, reporte in enumerate(self.reportes_parciales):
                if distancia_recorrida >= reporte:
                    time.sleep(1)
                    print(" ")
                    print(f"Reporte {i + 1}: Se han recorrido {distancia_recorrida} km.")
                    time.sleep(1)
                    print("Posiciones:")
                    print(" ")
                    posiciones_ordenadas = sorted(posiciones_pilotos.items(), key=lambda x: x[1], reverse=True)[:5]
                    for pos, (nombre_piloto, distancia) in enumerate(posiciones_ordenadas, start=1):
                        equipo = next(piloto.equipo for piloto in self.pilotos if piloto.nombre == nombre_piloto)
                        print(f"Posición {pos}: {nombre_piloto} ({equipo})")
                        time.sleep(1)
                    self.reportes_parciales[i] = self.distancia_total + 1

            if piloto_avance:
                for piloto in self.pilotos:
                    if piloto.nombre in piloto_avance:
                        distancia_recorrida += piloto_avance[piloto.nombre]
                        posiciones_pilotos[piloto.nombre] += piloto_avance[piloto.nombre]

        time.sleep(1)
        print(" ")
        print(f"Ganadores de la carrera se han recorrido {distancia_recorrida} km.")
        time.sleep(1)
        print("Posiciones finales:")
        print(" ")
        posiciones_ordenadas = sorted(posiciones_pilotos.items(), key=lambda x: x[1], reverse=True)
        for pos, (nombre_piloto, distancia) in enumerate(posiciones_ordenadas, start=1):
            equipo = next(piloto.equipo for piloto in self.pilotos if piloto.nombre == nombre_piloto)
            puntaje = self.puntuacion[pos - 1] if pos <= len(self.puntuacion) else 0
            print(f"Posición {pos}: {nombre_piloto} ({equipo}) - Puntos: {puntaje}")
            time.sleep(1)

# Información de los pilotos, incluyendo nombre, equipo y probabilidad de avance
pilotos_info = [
    ("M.Verstappen", "RED BULL", 0.11),
    ("S.Perez", "RED BULL", 0.09),
    ("L.Norris", "McLaren", 0.09),
    ("O.Piastri", "McLaren", 0.05),
    ("C.Lerclerc", "Ferrari", 0.09),
    ("C.Sainz", "Ferrari", 0.09),
    ("LHamilton", "Mercedes", 0.09),
    ("G.Russell", "Mercedes", 0.05),
    ("F.Alonso", "Aston Martin", 0.09),
    ("L.Stroll", "Aston Martin", 0.02),
    ("E.Ocon", "Alpine", 0.02),
    ("P.Gasly", "Alpine", 0.02),
    ("L.Lawson", "Alpha Tauri", 0.02),
    ("Y.Tsunoda", "Alpha Tauri", 0.02),
    ("G.Zhou", "Alfa Romeo", 0.02),
    ("V.Bottas", "Alfa Romeo", 0.05),
    ("N.Hulkenberg", "Haas", 0.02),
    ("K.Magnussen", "Haas", 0.02),
    ("A.Albon", "Williams", 0.02),
    ("L.Sargeant", "Williams", 0.02)
]

# Creación de objetos Piloto a partir de la información de los pilotos
pilotos = [Piloto(nombre, equipo, probabilidad) for nombre, equipo, probabilidad in pilotos_info]

# Parámetros de la carrera
distancia_total = 300
# reportes_parciales = [distancia_total // 4, distancia_total // 2, distancia_total // 4 * 3, distancia_total]
puntuacion = [25, 18, 15, 12, 10, 8, 6, 4, 2, 1]

# Solicitar al usuario la cantidad de carreras que desea simular
numero_carreras = int(input("¿Cuántas carreras desea hacer?"))

# Bucle que ejecuta la simulación de la carrera la cantidad de veces especificada por el usuario
for i in range(numero_carreras):
    print(f"** Carrera {i + 1} **")
    reportes_parciales = [distancia_total // 4, distancia_total // 2, distancia_total // 4 * 3, distancia_total]
    carrera = CarreraF1(pilotos, distancia_total, reportes_parciales, puntuacion)
    carrera.realizar_carrera()
    print("\n" + "=" * 40 + "\n")

    