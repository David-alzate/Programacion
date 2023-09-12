#include "TDAListaSencilla.cpp"
int main()
{
    ListaSencilla LISTA;
    eliminarLista(LISTA);
    LISTA = crearLista(LISTA);
    //recorrerLista(LISTA);
    //Insertar al inicio
    InsertarAlInicio(LISTA);
    //mostrarInfoPrimerNodo(LISTA);
    for(int i = 1 ; i<=3;i++){
        InsertarAlFinal(LISTA);}
    recorrerLista(LISTA);
    eliminarInicio(LISTA);
    cout<<"Lista despues de eliminar"<<endl;
    recorrerLista(LISTA);
}