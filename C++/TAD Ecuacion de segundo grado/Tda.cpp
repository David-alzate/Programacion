#include<iostream>
#include<cmath>

using namespace std;

struct TDAEcuacionSegundoGrado {
	float positivo;
	float negativo;
	float calculary;
	float ecuaciona;
	float ecuacionb;
	float ecuacionc;
	
};

TDAEcuacionSegundoGrado FormulaGeneral(TDAEcuacionSegundoGrado a, TDAEcuacionSegundoGrado b, TDAEcuacionSegundoGrado c){
	TDAEcuacionSegundoGrado resultado;
	resultado.positivo = (-b.positivo + sqrt(b.positivo * b.positivo - 4 * a.positivo * c.positivo)) / (2 * a.positivo);
    resultado.negativo = (-b.negativo - sqrt(b.negativo * b.negativo - 4 * a.negativo * c.negativo)) / (2 * a.negativo);
	return resultado;
}

TDAEcuacionSegundoGrado DespejarY(TDAEcuacionSegundoGrado a, TDAEcuacionSegundoGrado b, TDAEcuacionSegundoGrado c, TDAEcuacionSegundoGrado x){
	TDAEcuacionSegundoGrado resultado;
	resultado.calculary = (a.calculary * x.calculary * x.calculary + b.calculary * x.calculary + c.calculary);
	return resultado;
}

TDAEcuacionSegundoGrado CrearEcuacion(TDAEcuacionSegundoGrado a, TDAEcuacionSegundoGrado b, TDAEcuacionSegundoGrado c){
	TDAEcuacionSegundoGrado resultado;
	resultado.ecuaciona = (a.ecuaciona);
	resultado.ecuacionb = (b.ecuacionb);
	resultado.ecuacionc = (c.ecuacionc);
	return resultado;
}

TDAEcuacionSegundoGrado interceptoY(TDAEcuacionSegundoGrado a, TDAEcuacionSegundoGrado b, TDAEcuacionSegundoGrado c){
	TDAEcuacionSegundoGrado resultado;
	resultado.ecuaciona = (a.ecuaciona);
	resultado.ecuacionb = (b.ecuacionb);
	resultado.ecuacionc = (c.ecuacionc);
	return resultado;
}

TDAEcuacionSegundoGrado MostrarEcuacion(TDAEcuacionSegundoGrado a, TDAEcuacionSegundoGrado b, TDAEcuacionSegundoGrado c){
	TDAEcuacionSegundoGrado resultado;
	resultado.ecuaciona = (a.ecuaciona);
	resultado.ecuacionb = (b.ecuacionb);
	resultado.ecuacionc = (c.ecuacionc);
	return resultado;
}

int main(){
	
TDAEcuacionSegundoGrado a,b,c,x,r;
a.positivo = 1;
b.positivo = 3;
c.positivo = 2;
a.negativo = 1;
b.negativo = 3;
c.negativo = 2;
a.calculary = 1;
b.calculary = 3;
c.calculary = 2;
x.calculary = 5;
a.ecuaciona = 1;
b.ecuacionb = 3;
c.ecuacionc = 2;

r = FormulaGeneral(a,b,c);
cout<<"1) Formula General"<<endl<<endl;
cout<<"La respusta positiva de la formula general es = "<<r.positivo<<endl;
cout<<"La respusta negativa de la formula general es = "<<r.negativo<<endl<<endl;
r = DespejarY(a,b,c,x);
cout<<"2) Calcular Y"<<endl<<endl;
cout<<"El resultado de y es = "<<r.calculary<<endl<<endl;
r = CrearEcuacion(a,b,c);
cout<<"3) Crear ecuacion"<<endl<<endl;
cout<<"La ecuacion es = "<<a.ecuaciona<<"x^2+"<<b.ecuacionb<<"x+"<<c.ecuacionc<<endl<<endl;
r = interceptoY(a,b,c);
cout<<"4) Hallar el intercepto en y "<<endl<<endl;
cout<<"El intercepto en y de la ecuacion "<<a.ecuaciona<<"x^2+"<<b.ecuacionb<<"x+"<<c.ecuacionc<<" Es = "<<c.ecuacionc<<endl<<endl;
cout<<"5) Mostrar ecuacion"<<endl<<endl;
cout<<"La ecuacion es = "<<a.ecuaciona<<"x^2+"<<b.ecuacionb<<"x+"<<c.ecuacionc<<endl<<endl;
	return 0;
}
