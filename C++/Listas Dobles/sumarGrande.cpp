#include "TDAListaDoble.cpp"
#include <string>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>

int conversion(char dig)
{
    switch (dig)
    {
        case '0':
            return 0;
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 7;
        case '8':
            return 8;
        case '9':
            return 9;
    }
}

void dividirNumero(string num,TDAListaDoble *LD ){
    int indice;
    int exp = 0;
    nodoLDE *aux;
    int numResul = 0;
    int digito;
    for (indice = num.size() -1;indice>=0;indice--){
        digito = conversion(num[indice]);
        numResul = numResul + digito*pow(10,exp);
        exp++;
        if (exp == 3){
            exp = 0;
            aux = crearNodo(numResul);
            numResul=0;
            InsertarPorCabeza(LD,aux);
        }
    }
    if (exp >=1){
        aux = crearNodo(numResul);
        InsertarPorCabeza(LD,aux);
    }

}

void sumarNumeros(TDAListaDoble *LDN1, TDAListaDoble *LDN2){
    TDAListaDoble *resultado = Inicializar();
    nodoLDE *auxn1, *auxn2;
    int suma;
    int acarreo = 0;
    auxn1 = LDN1 -> fin;
    auxn2 = LDN2 -> fin;
    while(auxn1!=nullptr && auxn2 != NULL){
        suma = auxn1 -> info + auxn2 -> info;

        acarreo = suma / 1000;
        nodoLDE *nuevo = crearNodo(suma % 1000+acarreo);
        InsertarPorCabeza(resultado,nuevo);
        auxn1 = auxn1 -> ant;
        auxn2 = auxn2 -> ant;

    }
    while (auxn2 != NULL)
    {
        InsertarPorCabeza(resultado,auxn2);
        auxn2 = auxn2->ant;
    }
    
    ImprimirLista(resultado);

}

int main(){
    string numero1, numero2;
    cout<<"ingresa Numero 1: ";
    cin>>numero1;
    cout<<"ingresa Numero 2: ";
    cin>>numero2;
    TDAListaDoble *LDnumero1, *LDnumero2;
    LDnumero1=Inicializar();
    LDnumero2= Inicializar();
    dividirNumero(numero1,LDnumero1);
    dividirNumero(numero2,LDnumero2);
    sumarNumeros(LDnumero1,LDnumero2);
}   