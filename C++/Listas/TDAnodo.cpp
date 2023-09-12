#include <iostream>

using namespace std;

struct TDAFecha{
    int d;
    int m;
    int year;
};

struct nodo{
    TDAFecha feInicio;
    TDAFecha feFin;
    nodo     *Sig;
};

int NumeroDias(int m)
{   int dias;
    if (m = 2)
        dias=28;
    else
        if ((m <=7 and m % 2 !=0) or (m >=8 and m % 2 ==0))
            dias=31;
        else
            dias = 30;
    return dias;
}

bool ValidarFecha(TDAFecha fe){
    bool validar = true;
    if (fe.m<1 or fe.m>12)
        validar = false;
    else {
        int nro = NumeroDias(fe.m);
        if (fe.d<=0 or fe.d >nro)
            validar = false;
    }
    return validar;
}

TDAFecha LeerFecha()
{
        TDAFecha Fecha;
        cout<<"Ingrese el mes: ";
        cin>>Fecha.m; //Realizar la validacion
        cout<<"Ingrese el dia: ";
        cin>>Fecha.d;
        cout<<"Ingrese el a�o: ";
        cin>>Fecha.year;
        if (ValidarFecha(Fecha))
            return Fecha;
        else {
            cout<<" Fecha invalida,  Vuelve a Ingresarla "<<endl;
            return LeerFecha();
        }
}

nodo *crearNodo()
{
    nodo *nuevo;
    nuevo=new(nodo);
    cout<<"----------------------------------------------"<<endl;
    cout<<"    FECHA DE INICIO"<<endl;
    nuevo->feInicio = LeerFecha();
    cout<<"----------------------------------------------"<<endl;
/*    cout<<"    FECHA DE FIN"<<endl;
    nuevo->feFin    = LeerFecha();
    nuevo->Sig=NULL;*/
    return nuevo;

}

void Imprimir(nodo *Imp)
{
    if(Imp==NULL){
        cout<<"No hay datos";
    }
    else{
        cout<<"Fecha-Inicio"<<endl;
        cout<<Imp->feInicio.d<<" ";
        cout<<Imp->feInicio.m<<" ";
        cout<<Imp->feInicio.year<<endl;
    /*    cout<<"Fecha Fin"<<endl;
        cout<<Imp->feFin.d<<endl;
        cout<<Imp->feFin.m<<endl;
        cout<<Imp->feFin.year<<endl;*/
    }
}

void modificar(nodo *modi)
{
    int opcion;
    if(modi==NULL){
        cout<<"No hay datos";
    }
    else{
        cout<<"MENU"<<endl;
        cout<<"\n\n\n1. Modificar Fecha de Inicio";
        cout<<"\n\n\n2. Modificar Fecha de Fin";
        cout<<"\n\n\n3. Modificar ambas fechas";
        cout<<"\n\nSeleccionar Opci�n:  ";
        cin>>opcion;
        switch (opcion){
            case 1:
                 modi->feInicio=LeerFecha();
                 break;
            case 2:
                 modi->feFin=LeerFecha();
                 break;
            case 3:
                 modi->feInicio=LeerFecha();
                 modi->feFin=LeerFecha();
                 break;
        }
    }
}