#include <iostream>

using namespace std;

struct TDAfechas
{
    int d;
    int m;
    int year;
};


struct nodo
{
    TDAfechas feinicio;
    TDAfechas fefin;
    nodo *sig;
    
};


 TDAfechas leerfecha(){
        TDAfechas fecha;
        cout<< "Ingrese mes" <<endl;
        cin>> fecha.m;
        cout<< "Ingrese dia" <<endl;
        cin>> fecha.d;
        cout<< "Ingrese año" <<endl;
        cin>> fecha.year;
        return fecha;
    }

nodo *crearnodo(){
    nodo *nuevo;
    nuevo = new(nodo);
    nuevo->feinicio = leerfecha();
    nuevo->fefin = leerfecha();
    nuevo->sig = NULL;
    return nuevo;

}

void imprimir(nodo *imp){
    if (imp == NULL){
        cout<< "Sin datos" <<endl;
    }else{
        cout<< "Fecha inicio" <<endl;
        cout<<"Dia: "<< imp->feinicio.d <<endl;
        cout<<"Mes: "<< imp->feinicio.m <<endl;
        cout<<"Año: "<< imp->feinicio.year <<endl;

        cout<< "Fecha fin" <<endl;
        cout<< "Dia: " << imp->fefin.d <<endl;
        cout<< "Mes: " << imp->fefin.m <<endl;
        cout<< "Año: " << imp->fefin.year <<endl;
    }

}

void modificar(nodo *mod){
    if (mod == NULL){
        cout<< "Sin datos" <<endl;
    }else{
        cout<< "nada" <<endl;
}
}


int main(){
   nodo *minodo = crearnodo();
   imprimir(minodo);
   
    return 0;
}