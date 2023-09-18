#include <iostream>
#include <string>
#include "TDAPila.cpp"  

using namespace std;

// Verifica si un carácter es un operador
bool esOperador(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Asigna prioridad a operadores en la expresión infija
int prioridadExpresion(char c) {
    if (c == '^') return 4;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    if (c == '(') return 5;
    return 0; // NA
}

// Asigna prioridad a operadores en la pila
int prioridadPila(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    if (c == '(') return 0;
    return -1; // NA
}

// Convierte expresión infija a postfija
string infijaAPostfija(string expresion, TDAPila &pila) {
    string postfija = "";
    // El bucle recorre cada carácter en la expresión infija y determinar si es un operando, operador, o paréntesis.
    for (int i = 0; i < expresion.length(); i++) {
        char caracter = expresion[i];

        if (caracter == ' ') {
            continue; // Ignorar espacios en blanco
        }

        if (isalnum(caracter)) {
            postfija += caracter; // Agrega operandos directamente
        } else if (caracter == '(') {
            insertar(pila, caracter); // Guarda '(' en la pila
        } else if (caracter == ')') {
            while (!esVacia(pila) && info(pila) != '(') {
                postfija += info(pila); // Agrega operadores fuera de paréntesis
                eliminar(pila);
            }
            if (!esVacia(pila) && info(pila) == '(') {
                eliminar(pila); // Elimina '('
            }
        } else if (esOperador(caracter)) {
            while (!esVacia(pila) && prioridadExpresion(caracter) <= prioridadPila(info(pila))) {
                postfija += info(pila); // Agrega operadores con prioridad mayor
                eliminar(pila);
            }
            insertar(pila, caracter); // Inserta operador en la pila
        }
    }

    while (!esVacia(pila)) {
        postfija += info(pila); // Agrega operadores restantes
        eliminar(pila);
    }

    return postfija;
}

int main() {
    TDAPila pila; 
    pila.tope = NULL;  // Inicializa la pila

    string expresion;
    cout << "Expresión infija: ";
    getline(cin, expresion);

    string postfija = infijaAPostfija(expresion, pila);
    
    cout << "Expresión postfija: " << postfija << endl;

    return 0;
}