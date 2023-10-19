#include <iostream>

using namespace std;

struct computador
{
    string nombreCliente;
    string procesador;
    string tipoProblema;
    string marca;
};

struct nodo
{
    computador info;
    nodo *sig;
};

computador pedirDatos()
{
    computador nuevo_Computador;
    cin.ignore();
    cout<<"------------------"<<endl;
    cout<<"Nuevo Computador."<<endl;
    cout<<"------------------"<<endl;
    cout<<"Ingrese el nombre del cliente: "<<endl;
    getline(cin, nuevo_Computador.nombreCliente);

    cout<<"Ingrese el nombre del procesador: "<<endl;
    getline(cin, nuevo_Computador.procesador);

    cout<<"Ingrese el tipo de problema: "<<endl;
    getline(cin, nuevo_Computador.tipoProblema);

    cout<<"Ingrese la marca: "<<endl;
    getline(cin, nuevo_Computador.marca);

    return nuevo_Computador;
}

void borrarNodo(nodo *n)
{
	delete n;
}

nodo *crearNodo(){

    nodo *aux;
    aux = new(nodo);
    aux->info = pedirDatos();
    aux->sig = nullptr;

    return aux;
}

nodo *crearNodo(computador com){

    nodo *aux;
    aux = new(nodo);

    aux->info = com;
    aux->sig = nullptr;

    return aux;
}


void imprimirNodo(computador com)
{
	cout<<"\nNombre del Cliente: "<<com.nombreCliente;
	cout<<"\nProcesador: "<<com.procesador;
	cout<<"\nMarca: "<<com.marca;
	cout<<"\nProblema del Computador: "<<com.tipoProblema;
}
