#include "nodo.h"
#include <string>
using namespace std;

struct lisSencilla{
    nodo*cab;
    nodo*col;
}listS;

void inicializarLista(lisSencilla &listS){
    listS.cab=NULL;
    listS.col=NULL;
}
void crearLista(lisSencilla &LS){

     if (LS.cab==NULL){
         LS.cab=crearNodo();
         LS.col=LS.cab;
     }else{
         cout<<"Error";
     }

}
void Eliminarlista(lisSencilla LS){
     if (LS.cab==NULL){
        cout<<"Lista Vacía"<<endl;
     }
     else{
         //Borra todos los elementos
         ;
     }
}

void PrimerNodo(lisSencilla Ls){
    nodo *primero;
    if(Ls.cab != NULL){
        primero = Ls.cab;
        imprimirNodo(primero->info);
    }
}

void UltimaNodo(lisSencilla Ls){
    if(Ls.cab != NULL){
        nodo *ultimoNodo = Ls.col;
        imprimirNodo(ultimoNodo->info);
    }
}

bool EstaVacia(lisSencilla LS) {
    return LS.cab == NULL;
}

//Buscar de tres formas....

/*bool BuscarUsuario(lisSencilla LS, string nombreUsuario) {
    nodo *actual = LS.cab;
    bool encontrado=false;
    while (actual != nullptr and !encontrado) {
        if (actual->info.nombreusuario == nombreUsuario) {
            encontrado=true; // Usuario encontrado
        }
        actual = actual->sig;
    }
    return encontrado;
}

nodo *BuscarUsuarioDireccion(lisSencilla LS, string nombreUsuario) {
    nodo *actual = LS.cab;
    bool encontrado=false;
    while (actual != nullptr and !encontrado) {
        if (actual->info.nombreusuario == nombreUsuario) {
            encontrado=true; // Usuario encontrado
        }
        else
            actual = actual->sig;
    }
    return actual;
}
*
void ImprimirBuscarUsuario(lisSencilla LS, string nombreUsuario) {
    nodo *actual = LS.cab;
    bool encontrado=false;

    while (actual != nullptr and !encontrado) {
        if (actual->info.nombreusuario == nombreUsuario) {
            encontrado=true;
            MostrarInfo(actual->info);
        }
        else
            actual = actual->sig;
    }
    if (!encontrado)
        cout<<"Elemento no Encontrado ";
}*/

//Imprimir

void imprimirLista(lisSencilla ls){
    nodo *aux = ls.cab;
    if (EstaVacia(ls)){
        cout<<"Lista vacía\n";
    }
    else {
        while(aux != NULL){
        imprimirNodo(aux->info);
        aux = aux->sig;
        }
    }
}

void InsertarAlInicio(lisSencilla &Ls){
    nodo *nuevoNodo = crearNodo();

        if(Ls.cab == nullptr){
            Ls.cab = nuevoNodo;
            Ls.col = nuevoNodo;
        }
        else{
            nuevoNodo->sig = Ls.cab;
            Ls.cab = nuevoNodo;
        }
}

void InsertarAlFinal(lisSencilla &Ls){
    nodo *nuevoNodo = crearNodo();

        if(Ls.cab == nullptr){
            Ls.cab = nuevoNodo;
            Ls.col = nuevoNodo;
        }
        else{
            Ls.col->sig = nuevoNodo;
            Ls.col = nuevoNodo;
        }
}


void InsertarAlFinalL(lisSencilla &Ls, computador comp){
    nodo *nuevoNodo = new(nodo);
    nuevoNodo->info = comp;
        if(Ls.cab == nullptr){
            Ls.cab = nuevoNodo;
            Ls.col = nuevoNodo;
        }
        else{
            Ls.col->sig = nuevoNodo;
            Ls.col = nuevoNodo;
        }
}
void EliminarInicio(lisSencilla &LS){
    if(LS.cab != NULL){
        nodo * temporal = LS.cab;
        LS.cab=LS.cab->sig;
        delete temporal;
    }
    else{
        nodo * temporal = LS.cab;
        LS.cab=LS.cab->sig;
        delete temporal;
    }
}

nodo *PosicionAnterior(lisSencilla &LS){
    nodo *aux = LS.cab;
    while (aux->sig != NULL){
        aux = aux -> sig;
    }
    return aux;
}
void EliminarAlFinal(lisSencilla &Ls){
    if (Ls.cab==NULL){
        cout<<"Lista Vacia"<<endl;
    }
    else{
        nodo*aux;
        aux=PosicionAnterior(Ls);
        aux->sig=NULL;
        delete Ls.col;
        Ls.col=aux;
    }
}

/*void EliminarOtro(lisSencilla &ls, string nombrU){
    if (ls.cab == NULL){
        cout<<"Lista vacia"<<endl;
    }
    else{
        nodo *Buscar = BuscarUsuarioDireccion(ls,nombrU);
        if (Buscar == NULL){
            cout<<"Usuario no encontrado"<<endl;
        }
        else{
            if(ls.cab == Buscar){
                EliminarInicio(ls);
            }
            else{
                if(ls.col == Buscar){
                    EliminarAlFinal(ls);
                }
                else{
                    nodo *aux = ls.cab;
                    while(aux ->sig != Buscar){
                        aux = aux ->sig;
                    }
                    aux ->sig = Buscar ->sig;
                    delete(Buscar);
                }
                cout<<"Nodo eliminado"<<endl;
            }
        }
    }
}
*/
