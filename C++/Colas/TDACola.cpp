#include <iostream>
#include "TDANodoColas.cpp"
using namespace std;

struct cola {
    nodo *cab;
    nodo *col;
};
void mostrarInfoPrimerNodo(cola col){
	if (col.cab==NULL){
		cout<<"Error"<<endl;
	}
	else {
		mostrarInformacion(col.cab);
	}
}

void mostrarultimo(cola col){
    if (col.col==NULL){
		cout<<"Error"<<endl;
	}
	else {
		mostrarInformacion(col.col);
	}
}

bool EsVacia(cola col)
{
    if (col.cab==NULL)
        return true;
    else
        return false;
}

void insertarALfin(cola &col)
{
    if(col.cab == NULL){
        col.col = col.cab = crearNodo();
    }else{
        nodo *nuevo = crearNodo();
        col.col->Sig=nuevo;
        col.col=nuevo;
    }
}

void eliminarInicio (cola &col){
    if (col.cab == NULL){
        cout << "Error" << endl;
    } else {
        nodo *auxiliar = col.cab;
        col.cab = col.cab ->Sig;
        delete auxiliar;
        cout << "Nodo borrado" << endl;
    }
}