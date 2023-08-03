#include <iostream>

using namespace std;


int main() {
    
string nombre;
int edad;
cout<< "Ingrese su nombre " <<endl;
cin>>nombre;
cout<< "Ingrese su edad" <<endl;
cin>>edad;

if ( edad > 17){
    cout<< "La persona "<<nombre<<" es mayor de edad" <<endl;
}else{
    cout<< "La persona"<<nombre <<" es menor de edad" <<endl;
}


    return 0;
}