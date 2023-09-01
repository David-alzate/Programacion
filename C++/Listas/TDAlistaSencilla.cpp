#include <iostream>
#include "TDAnodo.cpp"

using namespace std;

struct TDAlistaSencilla
{
    nodo *cab;  
    nodo *col;
    nodo *aux;
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
        Imprimir(lista.cab);
        Imprimir(lista.col);
}
}

void mostrarTodo(TDAlistaSencilla  lista){
    nodo *aux;
    aux = lista.cab;
    while (aux != NULL)
    {
       Imprimir(aux);
       aux = aux -> Sig;
    }
    
}

bool tienedatos(TDAlistaSencilla lista){
    if (lista.cab != NULL){
        return true;
    }else{
        return false;
    }
}

void insertarAlInicio(TDAlistaSencilla lista){
    if (lista.cab == NULL){
       lista= crearlista(lista);
    }else if (lista.cab != NULL)
    {
        nodo *nuevo = crearNodo();
        nuevo -> Sig = lista.cab;
        lista.cab = nuevo;
    }
}

void insertarAlFin(TDAlistaSencilla lista){
    if (lista.col == NULL){
        lista=crearlista(lista);
    }else if(lista.col != NULL){
        nodo *nuevo = crearNodo();
        lista.col -> Sig = nuevo;
    }
}

nodo* buscar(TDAlistaSencilla lista, TDAFecha feBuscar){
    bool encontrado = false;
    nodo *temp = lista.cab;
    while ((temp != NULL && !encontrado))
    {
        if (temp -> feInicio.d == feBuscar.d && temp -> feInicio.m == feBuscar.m && temp ->feInicio.year == feBuscar.year ){
                   encontrado = true;
    }else{
        temp = temp -> Sig;
    } 
    return temp;
    }
}

void instertarDespues(TDAlistaSencilla lista, TDAFecha febuscar){
    if (lista.cab == NULL)
    cout<<"Error";
    else {
        nodo *aux=buscar(lista,febuscar);
        if (aux==NULL)
        cout<<"Error";
        else {
            if (aux==lista.col){
            insertarAlFin(lista);}

            else{ nodo *nuevo=crearNodo();
              nuevo->Sig= aux->Sig;
              aux->Sig=nuevo;
            }   
        }  
    }
}


int main() {
    TDAlistaSencilla lista;
    inicializarLista(lista);

    lista = crearlista(lista);
    mostrarTodo(lista);
    insertarAlInicio(lista);

    
    return 0;
}