 // Insertar elementos a una lista enlazada de manera ordenada 
 
 #include <iostream>
 #include <stdlib.h>  
 
 using namespace std;
 
 struct nodo
 {
    int dato;
    nodo * siguiente;
 };

// Funciones

nodo *lista = NULL;


// Funcion de insertar un elemento a la lista y ordenarlo de manera ascendente

void insertarLista(nodo *& lista , int n){
    nodo * newNodo = new(nodo);
    newNodo -> dato = n;

    nodo *aux1 = lista;
    nodo *aux2;

    while ((aux1 != NULL) && (aux1 -> dato < n ))
    {
        aux2 = aux1;
        aux1 = aux1 -> siguiente;
    }

    if (lista == aux1){
        lista = newNodo;
    }else{
        aux2 -> siguiente = newNodo;
    }

    newNodo -> siguiente = aux1;
    cout<< "Elemento "<<n<< " insertado a la lista correctamente " <<endl;
}


// Funcion para mostrar los elemntos que tiene la lista

void mostrarLista(nodo *lista){
    nodo *nodoActual = new(nodo);
    nodoActual = lista;
    while(nodoActual != NULL){
        cout<< nodoActual -> dato<<" -> ";
        nodoActual = nodoActual -> siguiente;
    }
}


// FUncion para buscar un elemento en la lista 

void buscarLista(nodo *lista,int n){
    bool band = false;
    nodo * nodoActual = new(nodo);
    nodoActual = lista;
    while ((nodoActual != NULL) && (nodoActual -> dato <= n))
    {
        if (nodoActual -> dato == n){
            band = true;
        }
        nodoActual = nodoActual -> siguiente;
    }

    if (band == true){
        cout<< "El elemento "<<n<< " SI esta en la lista" <<endl;
    }else{
        cout<< "El elemento "<<n<< " NO esta en la lista" <<endl;
    }
}


// Funcion para eliminar un elemento de la lista 

void eliminarElemento(nodo *&lista , int n ){
    // preguntar si la lista no esta vacia
    if (lista != NULL){
        nodo *aux_borrar;
        nodo *anterior = NULL;
        aux_borrar = lista;

        // Recorrer la lista
        while ((aux_borrar != NULL) && (aux_borrar -> dato != n))
        {
            anterior = aux_borrar;
            aux_borrar = aux_borrar -> siguiente;
        }
 
        // El elemento no ha sido encontrado
        if (aux_borrar == NULL){
            cout<< "EL elemento no existe" <<endl;
        // El primer elemento no es el que vamos a eliminar
        }else if(anterior == NULL){
            lista = lista -> siguiente;
            delete aux_borrar;
        // El elemento esta en la lista pero no es el primer nodo
        }else{
            anterior -> siguiente = aux_borrar -> siguiente;
            delete aux_borrar;
        }
    }
}


// Funcion eliminar todos los elementos de la lista 

void eliminarTodosElementos(nodo *&lista, int & n){
    nodo *aux = lista;
    n = aux -> dato;
    lista = aux -> siguiente;
    delete aux;

}


// Funcion del menu 

void menu(){
    int opcion,dato;

    do{
        cout<<endl << "Menu" <<endl;
        cout<< "1) Insertar elementos a la lista" <<endl;
        cout<< "2) Mostrar elementos de la lista" <<endl;
        cout<< "3) Buscar un elemento en la lista" <<endl;
        cout<< "4) Eliminar un elemento en la lista" <<endl;
        cout<< "5) Eliminar todos elemento en la lista" <<endl;
        cout<< "6) Salir" <<endl;
        cout<< "Opcion : ";
        cin>> opcion;

        switch (opcion)
        {
            case 1 : cout<< "Digite un numero" <<endl;
                     cin>> dato;
                     insertarLista(lista,dato);
                     break;

            case 2 : mostrarLista(lista);
                     break;
            
            case 3 : cout<< "Digite el numero que desea buscar " <<endl;
                     cin>> dato;
                     buscarLista(lista,dato);
                     break;
            case 4 : cout<< "Digite el numero que desea eliminar " <<endl;
                     cin>> dato;
                     eliminarElemento(lista,dato);
                     break;
            case 5 : cout<<"Los datos eliminados fueron"<< endl;
            while(lista != NULL){   // Mientras no sea el final de la lista
                eliminarTodosElementos(lista,dato);
                cout<< dato<< " -> ";
            }
             break;
                    
        }
       
    }while(opcion != 6);
}


int main() {

    menu();

     return 0;
 }