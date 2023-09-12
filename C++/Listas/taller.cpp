#include <iostream>
#include "TDAlistaSencilla.cpp"

using namespace std;

int main() {
    ListaSencilla ABC;
    eliminarLista(ABC);
    ABC = crearLista(ABC);
    for (int i = 1  ; i < 2 ; i ++){
        insertarALfin(ABC);
    }

    ListaSencilla XYZ;
    eliminarLista(XYZ);
    XYZ = crearLista(XYZ);
    for (int i = 1  ; i < 2 ; i ++){
        insertarALfin(XYZ);
    }

mostrarInfoPrimerNodo(ABC);
mostrarInfoPrimerNodo(XYZ);

recorrerLista(ABC);
recorrerLista(XYZ);


    
      
    return 0;
}