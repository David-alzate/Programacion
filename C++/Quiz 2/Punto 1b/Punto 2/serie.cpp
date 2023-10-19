#include <iostream>
#include "TDAPila.h"

using namespace std;

int main(){
    TDAPila migDav;

    migDav.tope=NULL;

    double sDav[] = { 1 , 1.0/2 , 1.0/4 , 1.0/8 , 1.0/16 };

    int nDav = sizeof(sDav) / sizeof(sDav[0]);

    int repeticionesDav;
    cout << "Ingrese el numero de repeticiones : ";
    cin >> repeticionesDav;

    for (int j = 0; j < repeticionesDav; j++) {
        
        for (int i = 0; i < nDav; i++) {

            insertar(migDav, sDav[i]); 

            cout << "Termino ingresado: " << sDav[i] << endl;

        }
    }

    cout << "el contenido es:" << endl;

    while (!esVacia(migDav)) {

        cout << info(migDav) << "+";

        eliminar(migDav);

    }

    return 0;
}
