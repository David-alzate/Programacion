#include <iostream>


using namespace std;

int par(int num, int contrasena){
    	cout<<"Ingrese la contraseņa "<< endl;
    	cin>>num;
    	if (num != contrasena){
    		cout<<"Contraseņa incorrecta "<< endl;
    		par(num, contrasena);
		}else{
			cout<<"Contraseņa correcta "<< endl;
		}
        return num;
	}



int main() {
	int num = 0;
    int contrasena = 777;
    
    num = par(num, contrasena);
    
    return 0;
}
   
	




