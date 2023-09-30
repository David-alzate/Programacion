#include <iostream>
using namespace std;


struct nodoLDE{
	int info;
	nodoLDE *sig, *ant;
} ;

/*  Por LUz Mery.   Crea el nodo de acuerdo a la informaci�n ingresada y coloca en NULL la siguiente posici�n*/
nodoLDE *crearNodo(int dato)
{
	nodoLDE *nodoC;
	nodoC = new nodoLDE;
	nodoC->info = dato;
	nodoC->sig =NULL;
	nodoC->ant = NULL;
	return nodoC;
}

nodoLDE *crearNodo()
{
	int info;
	cout<<"Ingrese el valor";
	cin>>info;
	return crearNodo(info);
}

void borrarNodo(nodoLDE *nodoBorrar)
{
	delete(nodoBorrar);
}

void imprimirInfo(nodoLDE *nodo) {

 cout<<"Informaci�n del nodo: "<<nodo->info<<endl;

 }