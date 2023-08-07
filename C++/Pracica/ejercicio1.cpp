#include <iostream>

using namespace std;

int main() {
    int a = 20;
    int *ptr = &a;

   cout<< "Memoria de a :  " << ptr <<endl;
   cout<< "valor de a : "<< *ptr <<endl;
    return 0;   
}