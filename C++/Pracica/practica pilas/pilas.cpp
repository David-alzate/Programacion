#include <iostream>

using namespace std;

struct nodo
{
    int dato;
    nodo *siguiente;
};


// Agregar elementos a la pila 

void agregarPila(nodo *&pila, int n){
    nodo *nuevoNodo = new(nodo);
    nuevoNodo -> dato = n;
    nuevoNodo -> siguiente = pila;
    pila = nuevoNodo;

    cout<< "Elemento "<<n<<" agregado a la pila correctamente" <<endl;
    
}

// Sacar elemento de la pila 

void sacarPila(nodo *&pila,int &n){
    nodo *aux = pila;
    n = aux -> dato;
    pila = aux -> siguiente;
    delete aux;
}


int main() {

nodo *pila = NULL;
int dato;

cout<< "ingrese un numero" <<endl;
cin>> dato;
agregarPila(pila,dato);

cout<< "ingrese un numero" <<endl;
cin>> dato;
agregarPila(pila,dato);

cout<< "Sacando elementos de la lista" <<endl;

while (pila != NULL)
{
    sacarPila(pila,dato);
    if (pila != NULL){
        cout<< dato<<",";
    }else{
        cout<< dato <<".";
    }
}



    return 0;
}