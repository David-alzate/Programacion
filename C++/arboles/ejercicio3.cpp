#include "TDAArbolBB.cpp"
#include "TDANodoAB.cpp"
#include "uso ArbolBB.cpp"



int sumaElementos(nodoAB *arbol){
    int suma=0;
    nodoAB *aux=arbol;
    while(tieneDatos(aux)){
        suma+=aux->cod;
        aux=aux->izq;
    }
    return suma;
}



int contarMenores(nodoAB *arbol, int valor){
    int contador=0;
    nodoAB *aux=arbol;
    while(tieneDatos(aux)){
        if(aux->cod<valor){
            contador = contador + 1;
        }
        aux=aux->izq;
    }
    return contador;
}

// metodo que devuelva el numero mayor de un arbol

int mayor(nodoAB *arbol){
    int mayor=0;
    nodoAB *aux=arbol;
    while(tieneDatos(aux)){
        if(aux->cod>mayor){
            mayor=aux->cod;
        }
        aux=aux->der;
    }
    return mayor;
}