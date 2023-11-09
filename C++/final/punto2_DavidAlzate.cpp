#include <iostream>
#include <stdlib.h>
using namespace std;

// estructura arbol
struct nodoAB
{
    int dato;
    nodoAB *izq;
    nodoAB *der;
};  

nodoAB *crearNodo(int dato)
{
    nodoAB *nuevo = new nodoAB;
    nuevo->dato = dato;
    nuevo->izq = NULL;
    nuevo->der = NULL;
    return nuevo;
}

bool tieneDatos (nodoAB *arbol){
    if(arbol!=NULL){
        return true;
    }else{
        return false;
    }
}

void mostrarDatos(nodoAB *imprimir)
{
    cout<< imprimir->dato <<endl;
}

bool buscarDatoNr (nodoAB *raiz, int dato){
    bool encontrado = false;
    nodoAB *aux =raiz;
    while (aux!=NULL && !encontrado){
        if (aux->dato==dato)
            encontrado = true;
        else
            if (dato < aux->dato)
                aux = aux->izq;
            else
                aux =aux->der;
    }
    return encontrado;
}

void ingresarNodos(nodoAB **arbol, int dato){
    // Caso 1
    if (!tieneDatos(*arbol)){
        *arbol = crearNodo(dato);
    }
    else{
        nodoAB *nuevo = crearNodo(dato);
        if (buscarDatoNr(*arbol, nuevo->dato)){
            cout<<"Error";
        }
        else{
            nodoAB *aux = *arbol;
            nodoAB *ant;
            while(aux != NULL){
                ant = aux;
                if (aux->dato > nuevo->dato)
                    aux = aux->izq;
                else
                    aux = aux->der;
            }
            if (nuevo->dato > ant->dato)
                ant ->der = nuevo;
            else
                ant ->izq = nuevo;
        }
    }
}

void Preorden(nodoAB *arbol){
    if (arbol!=NULL){
        mostrarDatos(arbol);
        Preorden(arbol->izq);
        Preorden(arbol->der);
    }
}

void Postorden(nodoAB *arbol){
    if (arbol!=NULL){
        Postorden(arbol->izq);
        Postorden(arbol->der);
        mostrarDatos(arbol);
    }
}


void EliminarNodos(nodoAB **arbol, int codigo){
    if(!buscarDatoNr(*arbol, codigo)){
        cout<<"El dato no existe"<<endl;
    }else{
        nodoAB *aux = *arbol;
        nodoAB *ant = NULL;
        while (aux->dato != codigo){
            ant = aux;
            if (aux->dato > codigo){
                aux = aux->izq;
            }else{
                aux = aux->der;
            }
        }
        //caso 2.1 cuando el nodo es hoja
        if (aux->izq == NULL && aux->der == NULL){
            if (ant->izq == aux){
                ant->izq = NULL;
            }else{
                ant->der = NULL;
            }
            delete aux;
        }else{
            //caso 2.2 cuando el nodo tiene un hijo
            if (aux->izq == NULL || aux->der == NULL){
                if (ant->izq == aux){
                    if (aux->izq != NULL){
                        ant->izq = aux->izq;
                    }else{
                        ant->izq = aux->der;
                    }
                }else{
                    if (aux->izq != NULL){
                        ant->der = aux->izq;
                    }else{
                        ant->der = aux->der;
                    }
                }
                delete aux;
            }else{  //caso 2.3 cuando el nodo tiene dos hijos
                nodoAB *aux2 = aux->der;
                nodoAB *ant2 = aux;
                while (aux2->izq != NULL){
                    ant2 = aux2;
                    aux2 = aux2->izq;
                }
                if (ant2->izq == aux2){
                    ant2->izq = aux2->der;
                }else{
                    ant2->der = aux2->der;
                }
                delete aux2;
            }
        }
    }
}

// Estructura para el TDA Cola
struct NodoCola {
    int dato;
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

void insertarAlFin(TDACola& c, int dato) {
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

// realizar el recorrido inorder y agregar los datos a las colas 
void inordenDSAJ(nodoAB *arbol, nodoAB *raiz, TDACola &colaIzquierda, TDACola &colaDerecha) {
    if (arbol != NULL) {
        inordenDSAJ(arbol->izq, raiz, colaIzquierda, colaDerecha);
        if (arbol->dato < 250000) {
            insertarAlFin(colaIzquierda, arbol->dato);
        } else {
            insertarAlFin(colaDerecha, arbol->dato);
        }
        inordenDSAJ(arbol->der, raiz, colaIzquierda, colaDerecha);
    }
}


// imprimir las dos colas 
void imprimirColasDSAJ(TDACola colaIzquierda, TDACola colaDerecha) {
    cout << "Cola Izquierda: "<<endl;
    imprimirCola(colaIzquierda);
    cout<< "" <<endl;
    cout << "Cola Derecha: "<<endl;
    imprimirCola(colaDerecha);
}

// crear Arbol con datos aleatorios entre 256000 y 1256000
void crearArbolDSAJ(nodoAB **arbol) {
    for (int i = 0; i < 50; i++) {
        ingresarNodos(arbol, rand() % (1256000 - 256000 + 1) + 256000);
    }
}


int main() {
    // crear arbol
    nodoAB *arbol = NULL;
    // crear colas
    TDACola colaIzquierda, colaDerecha;
    // inicializar colas
    inicializarCola(colaIzquierda);
    inicializarCola(colaDerecha);
    // crear arbol con datos aleatorios
    crearArbolDSAJ(&arbol);
    // realizar el recorrido inorder y agregar los datos a las colas
    inordenDSAJ(arbol, arbol, colaIzquierda, colaDerecha);
    // imprmir colas
    imprimirColasDSAJ(colaIzquierda, colaDerecha);
    return 0;
}