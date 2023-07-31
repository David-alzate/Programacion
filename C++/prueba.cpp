#include <iostream>

using namespace std;

int main(){

    int edad = 0;
    string nombre;

   cout<<"ingrese su nombre"<<"\n";
   cin>>nombre;
   cout<<"ingrese la edad"<<"\n";
   cin>>edad;
   if (edad >= 18) {
    cout<<"Hola " + nombre + " Su edad es ";
    cout<<edad;
    cout<<" eres mayor de edad";
   }
   else{
     cout<<"Hola " + nombre + " Su edad es ";
     cout<<edad;
    cout<<" eres menor de edad";
   }
   

    return 0;

}
