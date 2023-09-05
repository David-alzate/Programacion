#include <iostream>
using namespace std;

struct Nodo
{
    int Info;
    Nodo *next;
};
Nodo *ap1, *ap2, *ap3;

int main() {
    ap1 = new Nodo;
    ap2 = new Nodo;
    ap3 = new Nodo; // Nuevo nodo 
    ap1->Info = 34;
    ap2->Info = 5;
    ap3->Info = 2;
    ap1->next = ap2;
    ap2->next = ap3;
    ap3->next = NULL;
    ap2 -> next -> next = ap1;
    ap1 -> Info = ap2 -> next -> Info;
    ap1-> next -> Info = 2;
    
    // Imprimir los nodos
    cout << "Info del primer nodo: " << ap1->Info << endl;

   
    cout << "Info del segundo nodo: " << ap2->Info << endl;

    
    cout << "Info del tercer nodo: " << ap3->Info << endl;
}   