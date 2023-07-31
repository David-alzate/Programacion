#include<iostream>
#include <math.h>


using namespace std;

int main(){
	
	float peso = 0;
	float altura = 0;
	float resultado = 0;
	
	cout<<"Calculadora de indice corporal"<<"\n";
	cout<<"Ingrese su peso en kilogramos";
	cin>>peso;
	cout<<"Ingrese su altura en metros";
	cin>>altura;
	
	// Calculadora
	resultado = peso / pow(altura,2);
	cout<<"Su imc es : "<<resultado;
	
	
	return 0;
}
