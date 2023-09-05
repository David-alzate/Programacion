#include <iostream>
#include <vector>
#include <sstream>
#include  "TDAnodo.cpp"
using namespace std;


struct Conversion {
    int numero; 
    int base; 
    TDAFecha feIngreso; 
    string usuario;
    string resultado;
    string mensaje;
};

vector<Conversion> NumerosConversion;

// Función para calcular el resultado en base 16
string calcularResultadoBase16(int numero) {
    stringstream ss;
    ss << hex << numero;
    return ss.str();
}

// Procedimiento para calcular y asignar el resultado en base 16 a una conversión
void asignarResultado(Conversion& conversion) {
    if (conversion.base != 16) {
        conversion.resultado = "Error";
        return;
    }

    conversion.resultado = calcularResultadoBase16(conversion.numero);
}

int main() {
    // Ejemplo de uso 
    // Ingresar el numer que desea convertir mayor a 0  
    Conversion conversion;
    do
    {
        cout<< "ingrese el numero que desea convertir" <<endl;
        cin>>conversion.numero;
    } while (conversion.numero < 0);
    
    crearNodo();  // Ingresar la fecha de ingreso
    conversion.base = 16;   // Base 16
    asignarResultado(conversion);

    // Agregar conversión al vector
    NumerosConversion.push_back(conversion);

    // Imprimir el resultado        
    cout << "Resultado en base 16: " << NumerosConversion[0].resultado << endl;

    return 0;
}