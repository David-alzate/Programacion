#include <iostream>

using namespace std;

struct TDAproducto
{
    string nombre;
    string descripcion;
    int codigo;
    float precio;

};

TDAproducto *ingresar(string nombre, string descripcion, int codigo, float precio){
    TDAproducto *prod = new(TDAproducto);
    prod -> nombre = nombre;
    prod -> descripcion = descripcion;
    prod -> codigo = codigo;
    prod -> precio = precio;
    return prod;
}

void removepro (TDAproducto *prod){
    prod = NULL;
    delete prod;
    cout<< prod <<endl;
}

TDAproducto *updateprice(TDAproducto *producto, float nuewprice){
    producto -> precio = nuewprice;
    return producto;
}


int main() {

    TDAproducto *producto = ingresar("jabon", "se usa para lavar", 123, 2000);
    cout<< producto -> nombre <<endl;
    producto = updateprice(producto, 3000);
    cout<< producto -> precio <<endl;
    removepro(producto);
    cout<< producto-> nombre <<endl;
    return 0;
}