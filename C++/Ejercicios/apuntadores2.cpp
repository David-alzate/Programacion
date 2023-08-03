#include<iostream>

using namespace std;
struct fecha{
	int d,m,a;
};


struct nombres{
	string nombre;
	nombres *sig;
	fecha *otro;
};



int main(){

nombres *cab, *aux;
cab = new(nombres);
cab-> nombre = "Pablo";
cab-> otro = new(fecha);
cab->otro-> d = 25;
cab->otro-> m = 4;
cab->otro-> a = 1970;

cab->sig = new(nombres);
cab->sig -> nombre = "Pedro";
cab->sig -> otro = new(fecha);
cab->sig -> otro-> d = 8;
cab->sig -> otro-> m = 3;
cab->sig -> otro-> a = 1995;

cab->sig->sig = new(nombres);
cab->sig->sig -> nombre = "Ana";
cab->sig->sig -> otro = new(fecha);
cab->sig->sig-> otro-> d = 8;
cab->sig->sig-> otro-> m = 3;
cab->sig->sig-> otro-> a = 2001;
cab->sig->sig->sig=NULL;

cout<<cab -> nombre;
cout<<cab->sig -> nombre;

nombres *cab, *aux;
char opcion;
aux = new(nombres);
cab = aux;
do {
	cout<<"Digite el nombre: ";
	cin>>aux->nombre;
	aux = new (fecha);
	cout<<"Digite s para salir ";
	 
	
	
	
}


	return 0;
}
