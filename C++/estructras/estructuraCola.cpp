#include <iostream>
using namespace std;

// Estructura para el TDA Cola
struct NodoCola {
    char dato;
    NodoCola* siguiente;
};

struct TDACola {
    NodoCola* frente;
    NodoCola* fin;
};

void inicializarCola(TDACola& c) {
    c.frente = nullptr;
    c.fin = nullptr;
}

bool esVacia(TDACola c) {
    return c.frente == nullptr;
}

void insertarAlFin(TDACola& c, char dato) {
    NodoCola* nuevoNodo = new NodoCola;
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = nullptr;
    if (esVacia(c)) {
        c.frente = nuevoNodo;
        c.fin = nuevoNodo;
    } else {
        c.fin->siguiente = nuevoNodo;
        c.fin = nuevoNodo;
    }
}

void eliminarInicio(TDACola& c) {
    if (!esVacia(c)) {
        NodoCola* nodoAEliminar = c.frente;
        c.frente = c.frente->siguiente;
        delete nodoAEliminar;
        if (c.frente == nullptr) {
            c.fin = nullptr;
        }
    }
}

char info(TDACola c) {
    if (!esVacia(c)) {
        return c.frente->dato;
    }
    return '\0';
}

void imprimirCola(TDACola c) {
    if (!esVacia(c)) {
        NodoCola* aux = c.frente;
        while (aux != nullptr) {
            cout << aux->dato << " ";
            aux = aux->siguiente;
        }
    }
    else {
        cout << "Cola vacia" << endl;
    }
}

int main(){
    TDACola c;
    inicializarCola(c);
    insertarAlFin(c, 'a');
    insertarAlFin(c, 'b');
    insertarAlFin(c, 'c');
    imprimirCola(c);


    return 0;
}