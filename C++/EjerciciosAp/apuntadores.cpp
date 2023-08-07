#include<iostream>

using namespace std;

struct ejemplo{
	int numero;
	ejemplo *sig;};

int main(){

ejemplo *p, *q, *r, *aux;
p = new(ejemplo);
p -> numero = 3;
q = new(ejemplo);
q -> numero = 8;
r = new(ejemplo);
r -> numero = 3;
p -> sig = q;
q -> sig = r;
r -> sig = NULL;
aux = p;
cout<<q->numero<<"-"<<p->numero<<"-"<<r->numero<<endl;
while (aux != NULL){
	cout<<aux->numero;
	aux = aux->sig;
}



	return 0;
}
