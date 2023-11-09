#include <iostream>
using namespace std;

// Estructura para el TDA Pila
struct NodoPila {
    char dato;
    NodoPila* siguiente;
};

struct TDAPila {
    NodoPila* tope;
};

void inicializarPila(TDAPila& p) {
    p.tope = nullptr;
}

bool esVacia(TDAPila p) {
    return p.tope == nullptr;
}

void insertarPila(TDAPila& p, char dato) {
    NodoPila* nuevoNodo = new NodoPila;
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = p.tope;
    p.tope = nuevoNodo;
}

void eliminarPila(TDAPila& p) {
    if (!esVacia(p)) {
        NodoPila* nodoAEliminar = p.tope;
        p.tope = p.tope->siguiente;
        delete nodoAEliminar;
    }
}

char infoPila(TDAPila p) {
    if (!esVacia(p)) {
        return p.tope->dato;
    }
    return '\0';
}

void imprimirPila(TDAPila p) {
    if (!esVacia(p)) {
        NodoPila* aux = p.tope;
        while (aux != nullptr) {
            cout << aux->dato << " ";
            aux = aux->siguiente;
        }
    }
    else {
        cout << "Pila vacia" << endl;
    }
}

