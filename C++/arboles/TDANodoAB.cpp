#include <iostream>
using namespace std;

struct nodoAB {
    int cod;
};

nodoAB* crearNodo() {
    nodoAB* nueva = new nodoAB;
    cout << "Ingresar el cod: ";
    cin >> nueva->cod;
    cout << "Ingresar su nombre: ";
    cin >> nueva->nombre;
    cout << "Ingresar apellido: ";
    cin >> nueva->apellido;
    cout << "Ingresar su direccion: ";
    cin >> nueva->direccion;
    nueva->izq = NULL;
    nueva->der = NULL;
    return nueva;
}

nodoAB* crearNodo(int cod, string nombre,
                  string apellido, string direccion) {
    nodoAB* nueva = new nodoAB;
    nueva->cod=cod;
    nueva->nombre=nombre;
    nueva->apellido=apellido;
    nueva->direccion=direccion;
    nueva->izq = NULL;
    nueva->der = NULL;
    return nueva;
}

void mostrarDatos(nodoAB* imprimir) {
    cout << "El c�digo del usuario es: " << imprimir->cod << endl;
    cout << "El nombre del usuario es: " << imprimir->nombre << endl;
    cout << "El apellido del usuario es: " << imprimir->apellido << endl;
    cout << "La direcci�n del usuario es: " << imprimir->direccion << endl;
}
