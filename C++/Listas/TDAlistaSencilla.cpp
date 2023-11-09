#include <iostream>
#include "TDANodo.cpp"
using namespace std;

struct ListaSencilla {
    nodo *cab;
    nodo *col;
};

ListaSencilla crearLista(ListaSencilla &ls){
    if (ls.cab!=nullptr){
        cout<<"Error";
        return ls ;
    }
    else {
        ls.cab = crearNodo();
        ls.col =ls.cab;
        return ls;
    }
}

void eliminarLista(ListaSencilla &ls){
	ls.cab=NULL;
	ls.col=NULL;
}
//consultar primer y ultimo nodo

void mostrarInfoPrimerNodo(ListaSencilla ls){
	if (ls.cab==NULL){
		cout<<"Error"<<endl;
	}
	else {
		Imprimir(ls.cab);
	}
}

void mostrarultimo(ListaSencilla ls){
    if (ls.col==NULL){
		cout<<"Error"<<endl;
	}
	else {
		Imprimir(ls.col);
	}

}

bool EsVacia(ListaSencilla ls)
{
    if (ls.cab==NULL)
        return true;
    else
        return false;
}

void recorrerLista(ListaSencilla ls)
{
    if(ls.cab != NULL)
    {
        nodo *aux;
        aux=ls.cab;

        while (aux!=NULL)
        {
            Imprimir(aux);
            aux = aux->Sig;
        }
    }
}

void insertarALfin(ListaSencilla ls)
{
    if(ls.cab == NULL){
        ls = crearLista(ls);
    }else{
        nodo *nuevo = crearNodo();
        ls.col->Sig=nuevo;
        ls.col=nuevo;
    }
}

void InsertarAlFinal(ListaSencilla & ls){
	if (ls.cab == NULL){
		ls = crearLista(ls);
	}
	else {
		nodo *nuevo = crearNodo();
		ls.col->Sig= nuevo;
		ls.col = nuevo;
	}
}

bool buscarFecha (ListaSencilla ls, TDAFecha fecbuscar){
	bool encontrado = false;
	nodo *temp = ls.cab;
	while (temp != NULL and ! encontrado){
		if (temp->feInicio.d == fecbuscar.d and
			temp->feInicio.m == fecbuscar.m and
			temp->feInicio.year == fecbuscar.year)
			encontrado = true;
		else
			temp = temp->Sig;
	}
	return encontrado;
}

nodo* buscarDireccion (ListaSencilla ls, TDAFecha fecbuscar){
	bool encontrado = false;
	nodo *temp = ls.cab;
	while (temp != NULL and ! encontrado){
		if (temp->feInicio.d == fecbuscar.d and
			temp->feInicio.m == fecbuscar.m and
			temp->feInicio.year == fecbuscar.year)
			encontrado = true;
		else
			temp = temp->Sig;
	}
	return temp;
}

void InsertarAlInicio(ListaSencilla & ls){
	if (ls.cab == NULL){
		ls = crearLista(ls);
	}
	else {
		nodo *nuevo = crearNodo();
		nuevo->Sig= ls.cab;
		ls.cab= nuevo;
	}
}




//insertar un nodo despues de otro
void InsertarDespuesdeOtro(ListaSencilla ls, TDAFecha fe){
	//caso 1: lista sin datos
	if (ls.cab==NULL){
		cout<<"Error, no hay datos para buscar";
	}
	//caso 2: lista con datos
	else{
		nodo *aux = buscarDireccion(ls,fe);
		if(aux == NULL){
			cout<<"error"<<endl;
		}else{
			if(aux == ls.col){
				InsertarAlFinal(ls);
			}else{
				nodo *nuevo = crearNodo();
				nuevo->Sig = aux->Sig;
				aux->Sig = nuevo;
			}
		}

	}
}

void eliminarInicio (ListaSencilla &ls){
    if (ls.cab == NULL){
        cout << "Error" << endl;
    } else {
        nodo *auxiliar = ls.cab;
        ls.cab = ls.cab ->Sig;
        delete auxiliar;
        cout << "Nodo borrado" << endl;
    }
}

void eliminarFin(ListaSencilla & ls){
    if (EsVacia(ls)){
        cout << "Error" <<endl;
    } else {
        nodo *auxiliar = ls.cab;
        while(auxiliar ->Sig != ls.col){
            auxiliar = auxiliar ->Sig;
        }
        delete ls.col;
        ls.col = auxiliar;
        auxiliar -> Sig = NULL;
        cout << "Nodo eliminado" <<endl;
    }
}

void eliminarNodo(ListaSencilla &ls, TDAFecha fecha){

    nodo *borrar = buscarDireccion(ls,fecha);
    if(borrar == nullptr){
            cout<<"Error"<<endl;

    }else{
        nodo *aux = ls.cab;
        while(aux->Sig != borrar){
            aux = aux->Sig;
        }
            aux->Sig = borrar->Sig;
            delete borrar;
            cout<<"Borrado"<<endl;


    }
}