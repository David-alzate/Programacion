#include <iostream>

using namespace std;

int vol;

suma(int a,int b){
	cout<<"Ingrese el primer numero"<<endl;
	cin>> a;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>> b;
	return(a+b);
}

resta(int a,int b){
	cout<<"Ingrese el primer numero"<<endl;
	cin>> a;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>> b;
	return(a-b);
}

multiplicacion(int a,int b){
	cout<<"Ingrese el primer numero"<<endl;
	cin>> a;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>> b;
	return(a*b);
}

division(int a,int b){
	cout<<"Ingrese el primer numero"<<endl;
	cin>> a;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>> b;
	return(a/b);
}






int main(){
	
	int a;
    int b;
    int respuesta;
    

	do{
		cout<<"Ingrese la operacion que desea hacer "<<endl<<"1) suma"<<endl<<"2) resta"<<endl<<"3) multiplicacion"<<endl<<"4) division"<<endl;
	    cin>> respuesta;
	    if (respuesta <1 || respuesta > 4){
	    	cout<<endl<<"Seleccione una respuesta correcta"<<endl<<endl;
		}
		
	}while(respuesta<1 || respuesta > 4);
	
	if (respuesta == 1 ){
		cout<<"La suma es : "<<suma(a,b);
	}else if (respuesta == 2){
		cout<<"La resta es : "<<resta(a,b);
	}else if (respuesta == 3){
		cout<<"La multiplicacion es : "<<multiplicacion(a,b);
	}else if (respuesta == 4){
		cout<<"La division es : "<<division(a,b);
	}
	
    do{
    cout<<endl<<"Quiere realizar otra operacion"<<endl<<"1) si"<<endl<<"2) No";
	cin>>vol;
	if (vol == 1){
		main();
	}else if (vol == 2){
		exit (-1);
	}else{
		cout<<"Seleccione una respuesta correcta"<<endl;		
	}	
	}while(vol != 1 || vol != 2);

	
	return 0;
}



