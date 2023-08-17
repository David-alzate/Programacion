#include <iostream>

using namespace std;

struct ejemplo1
{
    string palabra;
    ejemplo1 *p;
    ejemplo2 *q;

    
};


struct ejemplo2
{
    string color;
    string ordinal;
    float  numero;
    ejemplo3 *ciu;
    ejemplo2 *aux;
};

struct ejemplo3
{
    string ciudad;
    ejemplo3 *z;
    
};


  ejemplo1 *cabEqui;
  ejemplo3 *cabCiu;

int main() {
      
    cabEqui =  new(ejemplo1);
    cabEqui -> palabra = "Numero 1 ";
    cabEqui -> p = new(ejemplo1);
    cabEqui -> p -> palabra = "Numero 2";
    cabEqui -> p -> p  = NULL;
    cabEqui -> p -> p -> p  = NULL;

    cabEqui -> q = new(ejemplo2);
    cabEqui -> q -> color = "Azul";
    cabEqui -> q -> ordinal = "tercero";
    cabEqui -> q -> numero = 28.3;

    cabEqui -> q -> aux = new(ejemplo2);
    cabEqui -> q -> aux -> color = "Verde";
    cabEqui -> q -> aux -> ordinal = "Primero";
    cabEqui -> q -> aux -> numero = 45.6;

    cabCiu -> z = new(ejemplo3);

    cabEqui -> q -> aux -> ciu = new(ejemplo3);
    cabEqui -> q -> aux -> ciu -> ciudad = "rionegro";
    cabEqui -> q -> aux -> ciu -> ciu -> ciudad = "la ceja";
    




    



    

  



    return 0;
}