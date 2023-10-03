#include <iostream>

using namespace std;

struct TDANodoAB
{
    int cod;
    string nombre;
    string apellido;
    string direccion;
    TDANodoAB *izq;
    TDANodoAB *Der;
};

TDANodoAB *crearNodo(){
    TDANodoAB *nuevo = new(TDANodoAB);
    cout<< "Ingrese el codigo" <<endl;
    cin>> nuevo -> cod;
    cout<< "ingrese el nombre" <<endl;
    cin>> nuevo -> nombre;
    cout<< "Ingrese el apellido" <<endl;
    cin>> nuevo -> apellido;
    cout<< "ingrese la direccion " <<endl;
    cin>> nuevo -> direccion;
    nuevo -> izq = NULL;
    nuevo -> Der = NULL;

    return nuevo;
}

TDANodoAB *crearNodo(int cod, string nombre, string apellido, string direccion){
    TDANodoAB *nuevo = new(TDANodoAB);
    nuevo ->cod = cod;
    nuevo ->nombre = nombre;
    nuevo -> apellido = apellido;
    nuevo -> izq = NULL;
    nuevo -> Der = NULL;
    return nuevo;
}

void mostrarInformacion(TDANodoAB *Imp){
    if(Imp==NULL){
        cout<<"No hay datos";
    }
    else{
        cout<<"Datos"<<endl;
        cout<<Imp->cod<<" ";
        cout<<Imp->nombre<<" ";
        cout<<Imp->apellido<<" ";
        cout<<Imp->direccion<<endl;
    }


}

int main(){


    return 0;
}