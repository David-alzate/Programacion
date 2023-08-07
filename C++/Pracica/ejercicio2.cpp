#include <iostream>

using namespace std;

int main() {

    int num1,*Ap, variable;
    Ap = new(int);

    num1 = 50;
    *Ap = num1;
    cout<< Ap  <<endl;
    cout<< *Ap <<endl; 
    Ap = &variable;
    cout<< Ap <<endl;
    cout<< *Ap <<endl;
    return 0;
}