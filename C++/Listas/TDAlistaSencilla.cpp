#include <iostream>
#include "TDAnodo.cpp"

using namespace std;

struct TDAlistaSencilla
{
    nodo *cab;
    nodo *col;
};


void inicializarLista(TDAlistaSencilla & lista){
        lista.cab = NULL;
        lista.col = NULL;
}
    
TDAlistaSencilla crearlista(TDAlistaSencilla lista){
    if (lista.cab != NULL ){
        cout<< "error" <<endl;
    }else{
        lista.cab = crearNodo();
        lista.col = lista.cab;  
    }
     return lista;
}

void eliminarLista(TDAlistaSencilla & lista){
    lista.cab = NULL;
    lista.col = NULL;
}

// consultar primer y ultimo nodo

void mostrar(TDAlistaSencilla & lista){
    if (lista.cab == NULL){
        cout<< "Error" <<endl;
    }else{
        cout<< lista.cab <<endl;
        cout<< lista.col <<endl;  
}
}


int main() {
    TDAlistaSencilla lista;
    inicializarLista(lista);

    lista = crearlista(lista);
    mostrar(lista);
    
    return 0;
}