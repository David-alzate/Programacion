#include "TDAPila.cpp"
#include <vector>
using namespace std;

bool EstaEquilibrada(vector <char> s){
    bool resultado = true;
    TDAPila pilaSignos;
    pilaSignos.tope = NULL;
    int i = 0;
    while (i < s.size() && resultado){
        if (s[i]=='(' || s[i]=='[' || s[i]=='{')
            insertar(pilaSignos,s[i]);
        else {
            if (s[i]==')'&& info(pilaSignos)=='(')
                eliminar(pilaSignos);
            else
                resultado = false;
        }
        i++;
    }
    return resultado && esVacia(pilaSignos);
}

int main(){
    vector <char> signos;
    signos={'(','(',')',')'};
    if (EstaEquilibrada(signos))
        cout<<"La expresión es Correcta"<<endl;
    else
        cout<<"La expresión NO es Correcta"<<endl;
    return 0;
}