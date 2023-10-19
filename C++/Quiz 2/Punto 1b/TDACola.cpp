#include <iostream>
#include "nodo.h"

using namespace std;

struct cola
{
    nodo *cola;
    nodo *cabeza;
};

//Para Borrar//
void imprimirCola(cola ls){
    nodo *aux = ls.cabeza;

        while(aux != NULL){
        imprimirNodo(aux->info);
        aux = aux->sig;
        }
}
void insertarAlFinal(cola &c,computador u)
{
    nodo *nuevoNodo = new(nodo);
    nuevoNodo->info=u;

    if (c.cabeza == nullptr && c.cola == nullptr)
    {
        c.cabeza = nuevoNodo;
        c.cola = c.cabeza;
    }
    else
    {
        c.cola->sig = nuevoNodo;
        c.cola = nuevoNodo;
    }
}

void eliminarInicio(cola &c)
{
    if (c.cabeza != nullptr)
    {
        nodo *temp = c.cabeza;
        c.cabeza = c.cabeza->sig;
        borrarNodo(temp);
    }
}

nodo *Frente(cola c)
{
    if (c.cabeza != nullptr)
    {
        return c.cabeza;
    }
    else
    {
        return nullptr;
    }
}

nodo *Cola(cola c)
{
    if (c.cola != nullptr)
    {
        return c.cola;
    }
    else
    {
        return nullptr;
    }
}

bool estaVacia(cola c)
{
    if (c.cabeza == nullptr && c.cola == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void imprimirCabeza(cola c)
{
    if (!estaVacia(c))
    {
        imprimirNodo(c.cabeza->info);
    }
    else
    {
        cout<<"La cola está vacía."<<endl;
    }
}
