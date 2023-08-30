#include <iostream>

using namespace std;

struct TDAfraccionario {
    float numerador;
    float denominador;
    
};

void crearFraccionario(TDAfraccionario & numero1){
    cout<<"ingrese el numerador : ";
    cin>>numero1.numerador; 
    do {
        cout<<"ingrese el numerador : ";
        cin>>numero1.denominador; 
    }while(numero1.denominador == 0 );
}

TDAfraccionario sumarFraccionarios(TDAfraccionario numero1,TDAfraccionario numero2){
    TDAfraccionario resultado;
    resultado.numerador = numero1.numerador*numero2.denominador + numero2.numerador*numero1.denominador;
    resultado.denominador = numero1.denominador * numero2.denominador;
    return resultado;
}

TDAfraccionario restarFraccionarios(TDAfraccionario numero1,TDAfraccionario numero2){
    TDAfraccionario resultado;
    resultado.numerador = numero1.numerador*numero2.denominador - numero2.numerador*numero1.denominador;
    resultado.denominador = numero1.denominador * numero2.denominador;
    return resultado;
}


TDAfraccionario multiplicarFraccionarios(TDAfraccionario numero1,TDAfraccionario numero2){
    TDAfraccionario resultado;
    resultado.numerador = numero1.numerador*numero2.numerador;
    resultado.denominador = numero1.denominador * numero2.denominador;
    return resultado;
}


int main() {
  
  TDAfraccionario a,b,r,r2,r3;
  a.numerador = 5;
  a.denominador = 2;
  b.numerador = 3;
  b.denominador = 4;
  r = sumarFraccionarios(a,b);
  cout<<r.numerador<<" / "<<r.denominador<<endl;
  r2 = restarFraccionarios(a,b);
  cout<<r2.numerador<<" / "<<r2.denominador<<endl;
  r3 = multiplicarFraccionarios(a,b);
  cout<<r3.numerador<<" / "<<r3.denominador;
  
  
    return 0;
}