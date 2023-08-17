#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct TDAdiccionario
{
    string palabra;
    vector<string> significados;
};

void ingresar(TDAdiccionario &palabra1)
{
    cout << "Ingrese la palabra: ";
    cin >> palabra1.palabra;

    int numSignificados;
    cout << "Ingrese la cantidad de significados: ";
    cin >> numSignificados;

    for (int i = 0; i < numSignificados; i++) {
        cout << "Ingrese el significado " << i + 1 << ": ";
        string significado;
        cin >> significado;
        palabra1.significados.push_back(significado);
    }
}

void buscarSignificado(const vector<TDAdiccionario> &diccionario, const string &palabra)
{
    bool encontrada = false;
    for (const auto &entry : diccionario) {
        if (entry.palabra == palabra) {
            encontrada = true;
            cout << "Palabra: " << entry.palabra << endl;
            cout << "Significados:" << endl;
            for (const string &significado : entry.significados) {
                cout << "- " << significado << endl;
            }
            break;
        }
    }
    if (!encontrada) {
        cout << "Palabra no encontrada en el diccionario." << endl;
    }
}

int main()
{
    int respuesta = 0;
    vector<TDAdiccionario> diccionario;

    cout << "Bienvenido" << endl;
    
    do {
        TDAdiccionario miPalabra;
        ingresar(miPalabra);
        diccionario.push_back(miPalabra);

        cout << "Desea Ingresar otra palabra?" << endl << "1) Si" << endl << "2) No" << endl;
        cin >> respuesta;
    } while (respuesta == 1);

    cout << "Buscar significado de palabra: ";
    string palabraBuscar;
    cin >> palabraBuscar;
    buscarSignificado(diccionario, palabraBuscar);

    cout << "Adios" << endl;

    return 0;
}
