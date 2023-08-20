#include <iostream>

using namespace std;

struct expresion
{
    string caracter;
    expresion *iz;
    expresion *de;

};


int main() {

    expresion *nodo = new(expresion);
    nodo -> caracter = "*";
    nodo -> iz = new(expresion);
    nodo -> de = new(expresion);

    nodo -> iz -> caracter = "+";
    nodo -> iz -> iz = new(expresion);
    nodo -> iz -> de = new(expresion);
    nodo -> iz -> iz -> caracter = "a";
    nodo -> iz -> de -> caracter = "b";

    nodo -> de -> caracter = "-";
    nodo -> de -> iz = new(expresion);
    nodo -> de -> de = new(expresion);
    nodo -> de -> iz -> caracter = "c";
    nodo -> de -> de -> caracter = "d";

    cout<< nodo -> iz -> de -> caracter <<endl;





    return 0;
}