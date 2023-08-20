#include <iostream>

using namespace std;


struct estructura3
{
    string municipio;
    estructura3 * derecha;
};


struct estructura2
{
    string color;
    string ordinal;
    float temperatura;
    estructura3 *abajo;
    
};

struct estructura1
{
    string numero;
    estructura2 * derecha;
    estructura1 * abajo;
};


int main() {

    estructura1 *cabequi = new(estructura1);
    cabequi -> numero = "numero 1";
    cabequi -> derecha = new(estructura2);
    cabequi -> abajo = new(estructura1);

    cabequi -> abajo -> numero = "numero 2";
    cabequi -> abajo -> derecha = NULL;
    cabequi -> abajo -> abajo = NULL;

    cabequi -> derecha -> color = "Azul";
    cabequi -> derecha -> ordinal = "Tercero";
    cabequi -> derecha -> temperatura = 28.3;
    cabequi -> derecha -> abajo = new(estructura3);
    cabequi -> derecha -> abajo -> municipio = "El retiro";
    cabequi -> derecha -> abajo -> derecha = NULL;

    estructura2 *nueva = new(estructura2);
    nueva -> color = "verde";
    nueva -> ordinal = "Primero";
    nueva -> temperatura = 45.6;
    nueva -> abajo = new(estructura3);
    
    estructura3 *cabciu = nueva -> abajo;

    cabciu -> municipio = "rionegro";
    cabciu -> derecha = new(estructura3);
    cabciu -> derecha -> municipio = "La ceja";
    cabciu -> derecha -> derecha = cabequi -> derecha -> abajo;
    
    cout<< cabequi -> derecha -> temperatura <<endl;
 



    return 0;
}