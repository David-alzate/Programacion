#include <iostream>
using namespace std;

// Estructura para el nodo de la lista
struct nodoLista {
    char dato;
    nodoLista* Sig;
};

struct ListaSencilla {
    nodoLista* cab;
    nodoLista* col;
};

nodoLista* crearNodo() {
    nodoLista* nuevo = new nodoLista;
    cout << "Ingrese la letra: ";
    cin >> nuevo->dato;
    nuevo->Sig = nullptr;
    return nuevo;
}

void Imprimir(nodoLista* Imp) {
    if (Imp == nullptr) {
        cout << "No hay datos" << endl;
    }
    else {
        cout << Imp->dato << " ";
    }
}

ListaSencilla crearLista(ListaSencilla& ls) {
    if (ls.cab != nullptr) {
        cout << "Error" << endl;
        return ls;
    }
    else {
        ls.cab = crearNodo();
        ls.col = ls.cab;
        return ls;
    }
}

void recorrerLista(ListaSencilla ls) {
    if (ls.cab != nullptr) {
        nodoLista* aux = ls.cab;

        while (aux != nullptr) {
            Imprimir(aux);
            aux = aux->Sig;
        }
    }
}

void insertarALfin(ListaSencilla& ls) {
    if (ls.cab == nullptr) {
        ls = crearLista(ls);
    }
    else {
        nodoLista* nuevo = crearNodo();
        ls.col->Sig = nuevo;
        ls.col = nuevo;
    }
}

void eliminarLista(ListaSencilla& ls) {
    ls.cab = nullptr;
    ls.col = nullptr;
}

void mostrarInfoPrimerNodo(ListaSencilla ls) {
    if (ls.cab == nullptr) {
        cout << "Error" << endl;
    }
    else {
        Imprimir(ls.cab);
    }
}

void mostrarultimo(ListaSencilla ls) {
    if (ls.col == nullptr) {
        cout << "Error" << endl;
    }
    else {
        Imprimir(ls.col);
    }
}

bool EsVacia(ListaSencilla ls) {
    return ls.cab == nullptr;
}

void insertarDespuesDeOtro(ListaSencilla& ls, char dato) {
    if (ls.cab == nullptr) {
        cout << "Lista vacía, no se puede insertar después de otro." << endl;
        return;
    }

    nodoLista* nuevo = crearNodo();
    nodoLista* aux = ls.cab;

    while (aux != nullptr) {
        if (aux->dato == dato) {
            nuevo->Sig = aux->Sig;
            aux->Sig = nuevo;
            break;
        }
        aux = aux->Sig;
    }
}

void eliminarInicio(ListaSencilla& ls) {
    if (ls.cab == nullptr) {
        cout << "Error: Lista vacía" << endl;
        return;
    }
    nodoLista* auxiliar = ls.cab;
    ls.cab = ls.cab->Sig;
    delete auxiliar;
    cout << "Nodo borrado" << endl;
}

void eliminarFin(ListaSencilla& ls) {
    if (EsVacia(ls)) {
        cout << "Error: Lista vacía" << endl;
        return;
    }
    nodoLista* auxiliar = ls.cab;
    if (ls.cab == ls.col) {
        // Solo hay un nodo en la lista
        delete ls.cab;
        ls.cab = nullptr;
        ls.col = nullptr;
    } else {
        while (auxiliar->Sig != ls.col) {
            auxiliar = auxiliar->Sig;
        }
        delete ls.col;
        ls.col = auxiliar;
        ls.col->Sig = nullptr;
    }
    cout << "Nodo eliminado" << endl;
}

bool buscarDato(ListaSencilla ls, char dato) {
    nodoLista* aux = ls.cab;
    while (aux != nullptr) {
        if (aux->dato == dato) {
            return true;
        }
        aux = aux->Sig;
    }
    return false;
}

nodoLista* buscarDireccion(ListaSencilla ls, char dato) {
    nodoLista* aux = ls.cab;
    while (aux != nullptr) {
        if (aux->dato == dato) {
            return aux;
        }
        aux = aux->Sig;
    }
    return nullptr;
}

void eliminarNodo(ListaSencilla& ls, char dato) {
    if (ls.cab == nullptr) {
        cout << "Lista vacía, no se puede eliminar el nodo." << endl;
        return;
    }
    nodoLista* borrar = buscarDireccion(ls, dato);
    if (borrar == nullptr) {
        cout << "Dato no encontrado en la lista." << endl;
    } else {
        nodoLista* aux = ls.cab;
        if (aux == borrar) {
            // El nodo a eliminar es el primero de la lista
            ls.cab = ls.cab->Sig;
            delete borrar;
        } else {
            while (aux->Sig != borrar) {
                aux = aux->Sig;
            }
            aux->Sig = borrar->Sig;
            if (borrar == ls.col) {
                ls.col = aux;
            }
            delete borrar;
        }
        cout << "Nodo eliminado" << endl;
    }
}

