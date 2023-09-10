#include <iostream>
#include "TDAlistaSencilla.cpp"

using namespace std;

int main() {

    TDAlistaSencilla lista;
    TDAFecha febuscar;
    // Inicializar lista
    inicializarLista(lista);
    // crear la lista 
    lista = crearlista(lista);
    // Mostrar toda la lista
    mostrarTodo(lista);
    // Insertar al inicio
    insertarAlInicio(lista);
    // Insertar al fin
    insertarAlFin(lista);
    // Mostrar el primer nodo
    mostrarInfoPrimerNodo(lista);
    // Mostrar el ultimo nodo
    mostrarultimo(lista);
    // Tiene datos
    tienedatos(lista);
    // insertar despues de otro
    instertarDespues(lista,febuscar);
    // Eliminar al inicio 
    eliminarAlInicio(lista);
    // Eliminar al fin 
    eliminarAlFin(lista);
    // Eliminar Un nodo 
    eliminarNodo(lista,febuscar);

  
    return 0;
}