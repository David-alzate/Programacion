#include <iostream>
#include "TDACola.cpp"
using namespace std;

vector<int> cantidadTransacciones(20);
vector<int> tipoTransacciones;
int suma;

struct Transaccion {
    int tipo;
    int tiempo;
};

void calculoTransacciones() {
    for (int i = 0; i < 20; i++) {
        cantidadTransacciones[i] = rand() % 4 + 1;
        suma += cantidadTransacciones[i];
    }

    tipoTransacciones.resize(suma);  // Ajusta el tamaño de tipoTransacciones según la suma

    for (int i = 0; i < suma; i++) {
        tipoTransacciones[i] = rand() % 4 + 1;
    }
}

int main() {
    calculoTransacciones();

    cola tiemposTransacciones1234;  // Para transacciones 1, 2 y 4
    cola tiemposTransaccion3;       // Para transacciones 3

    int tiempoTotal = 0;  // Variable para realizar un seguimiento del tiempo total

    for (int i = 0; i < suma; i++) {
        int tiempo = 0;

        // Asigna el tiempo según el tipo de transacción
        switch (tipoTransacciones[i]) {
            case 1:
                tiempo = 10;
                break;
            case 2:
                tiempo = 8;
                break;
            case 3:
                tiempo = 4;
                break;
            case 4:
                tiempo = 5;
                break;
            default:
                tiempo = 0; // Manejo de error si el tipo no está en el rango 1-4
                break;
        }

        // Agrega el tiempo a la cola correspondiente
        if (tipoTransacciones[i] == 3) {
            insertarALfin(tiemposTransaccion3);
            tiemposTransaccion3.col->tiempo = tiempo;  // Agrega el tiempo al nodo
        } else {
            insertarALfin(tiemposTransacciones1234);
            tiemposTransacciones1234.col->tiempo = tiempo;  // Agrega el tiempo al nodo
        }

        // Actualiza el tiempo total
        tiempoTotal += tiempo;
    }

    // Imprimir los tiempos de las colas
    cout << "Tiempos de transacciones 1, 2 y 4:" << endl;
    mostrarInfoPrimerNodo(tiemposTransacciones1234);

    cout << "Tiempos de transacciones 3:" << endl;
    mostrarInfoPrimerNodo(tiemposTransaccion3);

    // Imprimir el tiempo total
    cout << "Tiempo total de ejecución: " << tiempoTotal << " minutos" << endl;

    return 0;
}
