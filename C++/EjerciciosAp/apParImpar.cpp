/*Comprobar si un numero es par o impar, y señalar la posicion de memoria donde se esta guardando el numero. Con punteros. */

#include <iostream>

using namespace std;


void parImpar(){
    int numero, *direccion_numero,respuesta;

    cout<< "Digite un numero" <<endl;
    cin>> numero;

    direccion_numero = &numero;  //Guardando la posicion de memoria

    if (*direccion_numero % 2 == 0){
        cout<< "El numero "<< *direccion_numero<< " es par" <<endl;
        cout<< "La direccion de memoria del numero almacenado es "<< direccion_numero <<endl;
    }else{
         cout<< "El numero "<< *direccion_numero<< " es impar" <<endl;
        cout<< "La direccion de memoria del numero almacenado es "<< direccion_numero <<endl;
    }
    
    cout<< "¿Desea volver a evaluar otro numero?"<<endl<< " 1) Si"<<endl<<" 2) No" <<endl;
    cin>> respuesta;
    if(respuesta == 1){
        parImpar();
     }
    
}

int main() {

    parImpar();
    return 0;
}
 