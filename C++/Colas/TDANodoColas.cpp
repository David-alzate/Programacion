#include <iostream>
#include <vector>
using namespace std;

struct usuario{

    string nombre;
    double id;
    vector <string> tipoTransaccion;
    vector <int> CantidadTransaccion;

};

struct nodo{
    usuario info;
    nodo     *Sig;
};

usuario solicitarInformacion(){
    int opcion;
    int cantidad;
    usuario usuario;
    cout<<"Ingresar Nombre "<<endl;
    cin>>usuario.nombre;
    cout<<"Ingresar su identificacion "<<endl;
    cin>>usuario.id;
    do{
       cout<<"1. Pago Matricula"<<endl;
       cout<<"2. Pago Multas"<<endl;
       cout<<"3. Reclamos viaticos"<<endl;
       cout<<"4. Revisio cuenta"<<endl;
       cout<<"5. Salir"<<endl;
       cin>>opcion;
        switch(opcion){
        case 1:
            usuario.tipoTransaccion.push_back("Pago Matricula");
            cout<<"Ingrese el numero de transacciones"<<endl;
            cin>>cantidad;
            usuario.CantidadTransaccion.push_back(cantidad);
            break;
        case 2:
            usuario.tipoTransaccion.push_back("Pago Multas");
            cout<<"Ingrese el numero de transacciones"<<endl;
            cin>>cantidad;
            usuario.CantidadTransaccion.push_back(cantidad);
            break;
        case 3:
            usuario.tipoTransaccion.push_back("Reclamos Viaticos");
            cout<<"Ingrese el numero de transacciones"<<endl;
            cin>>cantidad;
            usuario.CantidadTransaccion.push_back(cantidad);
            break;
        case 4:
            usuario.tipoTransaccion.push_back("Revision Cuenta");
            cout<<"Ingrese el numero de transacciones"<<endl;
            cin>>cantidad;
            usuario.CantidadTransaccion.push_back(cantidad);
            break;
        }
    }while(opcion!=5);


    return usuario;
}

nodo *crearNodo()
{
    nodo *nuevo;
    nuevo=new(nodo);
    nuevo->info = solicitarInformacion();
    nuevo->Sig=NULL;
    return nuevo;

}

nodo *crearNodo(usuario usu)
{
    nodo *nuevo;
    nuevo=new(nodo);
    nuevo->info = usu;
    nuevo->Sig=NULL;
    return nuevo;

}

void mostrarInformacion(nodo *m){
    cout<< "el usuario es "<<endl;
    cout<< m->info.nombre<<endl;
    cout<< m->info.id<<endl;
    for (int i = 0; i < m->info.CantidadTransaccion.size(); i++){
        cout<< m->info.tipoTransaccion[i]<<endl;
        cout<< m->info.CantidadTransaccion[i]<<endl;
    }
}