#include "TDAArbolBB.cpp"
#include "ejercicio3.cpp"

nodoAB *raiz;

int main(){

    raiz =NULL;
    if (!tieneDatos(raiz))
        cout<<"Arbol SIN Datos\n";
    else
        cout<<"Arbol CON Datos\n";

    ingresarNodos(&raiz);
    if (!tieneDatos(raiz))
        cout<<"Arbol sin Datos\n";
    else
        cout<<"Arbol CON Datos\n";

    ingresarNodos(&raiz);
    if (buscarNodoNR(raiz,5))
        cout<<"Encontrado!!!!\n";
    else
        cout<<"NOOOOOOOO  Encontrado!!!!\n";

    cout<<"Inorden:  "<<endl;
    Inorden(raiz);
    cout<<"PreOrden:  "<<endl;
    Preorden(raiz);
    cout<<"PostOrden:  "<<endl;
    Postorden(raiz);
    EliminarNodos(&raiz,2);
    cout<<"Inorden:  "<<endl;
    Inorden(raiz);

    sumarElementos(raiz);
    return 0;
}














