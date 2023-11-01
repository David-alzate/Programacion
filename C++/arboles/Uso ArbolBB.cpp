#include "TDAArbolBB.cpp"

nodoAB *raiz;

// dado un árbol binario, devuelva una lista que contenga los elementos del árbol mayores a un número K




// ejercicio 4
nodoAB *crearArbolApartirDeDos(nodoAB *arbol1, nodoAB *arbol2){
    nodoAB *aux1=arbol1;
    nodoAB *aux2=arbol2;
    nodoAB *arbol3=NULL;
    while(tieneDatos(aux1)){
        InsertarNodo(&arbol3,aux1->cod);
        aux1=aux1->izq;
    }
    while(tieneDatos(aux2)){
        InsertarNodo(&arbol3,aux2->cod);
        aux2=aux2->izq;
    }
    return arbol3;
}



// metodo que imprima las hojas de un arbol
void hojas(nodoAB *arbol){
    nodoAB *aux=arbol;
    if(tieneDatos(aux)){
        if(!tieneDatos(aux->izq) && !tieneDatos(aux->der)){
            cout<<aux->cod<<endl;
        }
        hojas(aux->izq);
        hojas(aux->der);
    }
}


// Ejercicio 8
int mayorDami(nodoAB *arbolDami){
    int mayorDami=0;
    nodoAB *auxDami=arbolDami;
    while(tieneDatos(auxDami)){
        if(auxDami->cod>mayorDami){
            mayorDami=auxDami->cod;
        }
        auxDami=auxDami->der;
    }
    return mayorDami;
}




int main(){
    int numeroNodos;
    raiz =NULL;
    if (!tieneDatos(raiz))
        cout<<"Arbol SIN Datos\n";
    else
        cout<<"Arbol CON Datos\n";

    
    cout<< "Cuantos nodos quiere ingresar" <<endl;
    cin>> numeroNodos;
    for(int i=0;i<numeroNodos;i++){
        
    }



   
    // Prueba ejercicio 8
    if (!tieneDatos(raiz))
        cout<<"Arbol SIN Datos\n";
    else
        cout<<"Arbol CON Datos\n";
        cout<< "El mayor es " <<endl;
        cout<<mayorDami(raiz)<<endl;
    // prueba ejercicio 7
    // casos de prueba hojas
    // si el arbol esta vacio (hojas)
    if (!tieneDatos(raiz))
        cout<<"Arbol SIN Datos\n";
    else
        cout<<"Arbol CON Datos\n";
        cout<< "Las hojas son " <<endl;
        hojas(raiz);


    // probar ejercicio 4

    crearArbolApartirDeDos(raiz,raiz)

    


    cout<<"Inorden:  "<<endl;
    Inorden(raiz);
    cout<<"PreOrden:  "<<endl;
    Preorden(raiz);
    cout<<"PostOrden:  "<<endl;
    Postorden(raiz);
    EliminarNodos(&raiz,2);
    cout<<"Inorden:  "<<endl;
    Inorden(raiz);
    return 0;
}




