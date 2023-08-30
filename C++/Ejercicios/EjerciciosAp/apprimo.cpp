/*Determinar si un numero es primo o no, con punteros y ademas indicar en que posicion de memoria se guardo el numero */

#include <iostream>
using namespace std;

void primo(){
  
    int numero, *direccionNumero, aux,respuesta;
    direccionNumero = &numero;

    cout<< "Ingrese un numero para comprobar si es primo o no" <<endl;
    cin>> numero;

      for(int i = 1; i <= *direccionNumero ; i = i + 1){
        if (*direccionNumero % i == 0 ){
            aux = aux + 1 ;
        }
      }

      if (aux == 2 ){
        cout<< "El numero "<< *direccionNumero << " Es primo" <<endl;
        cout<< "La direccion es : "<< direccionNumero <<endl;
    }else{
        cout<< "El numero "<< *direccionNumero << " No es primo" <<endl;
        cout<< "La direccion es : "<< direccionNumero <<endl;
        }

    cout<<endl<< "¿Desea volver a evaluar otro numero?"<<endl<< " 1) Si"<<endl<<" 2) No" <<endl;
    cin>> respuesta;
    if(respuesta == 1){
        primo();
     }

}


int main() {
  primo();
    
    return 0;
}