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


int main() {

nodo *pila = NULL;
int n1,n2;

cout<< "ingrese un numero" <<endl;
cin>> n1;
agregarPila(pila,n1);
      


    return 0;
}