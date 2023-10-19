#include <iostream>
using namespace std;

struct nodo{
    double info;
    nodo *Sig;
};

nodo *crearNodo()
{
    nodo *nuevo;
    nuevo=new(nodo);
    cout<<"----------------------------------------------"<<endl;
    cout<<"  Ingrese un número decimal"<<endl;
    cin>> nuevo->info;
    nuevo->Sig=NULL;
    return nuevo;
}

nodo *crearNodo(char dato)
{
    nodo *nuevo;
    nuevo=new(nodo);
    nuevo->info = dato;
    nuevo->Sig=NULL;
    return nuevo;
}

void borrarNodo(nodo *nodoABorrar){
    delete nodoABorrar;
}

void Imprimir(nodo *Imp)
{
    if(Imp==NULL){
        cout<<"No hay datos";
    }
    else{
        cout<<"Caracter"<<endl;
        cout<<Imp->info<<" ";
    }
}