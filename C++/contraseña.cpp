#include <iostream>


using namespace std;

int par(int num, int contrasena){
    	cout<<"Ingrese la contrase�a "<< endl;
    	cin>>num;
    	if (num != contrasena){
    		cout<<"Contrase�a incorrecta "<< endl;
    		par(num, contrasena);
		}else{
			cout<<"Contrase�a correcta "<< endl;
		}
        return num;
	}



int main() {
	int num = 0;
    int contrasena = 777;
    
    num = par(num, contrasena);
    
    return 0;
}
   
	




