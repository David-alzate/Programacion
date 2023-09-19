#include "TDAPila.cpp"
#include <vector>
using namespace std;

// Definición de la función para verificar el equilibrio de la expresión
bool EstaEquilibrada(vector <char> s){
    // Inicializar la variable 'resultado' como verdadera (asumimos que la expresión está equilibrada)
    bool resultado = true;

    // Crear una instancia de la clase TDAPila para mantener un seguimiento de los paréntesis de apertura
    TDAPila pilaSignos;
    pilaSignos.tope = NULL;

    // Inicializar un contador 'i' en 0 para recorrer el vector 's'
    int i = 0;

    // Inicio del bucle while que recorre la expresión
    while (i < s.size() && resultado){
        // Verificar si el carácter actual es un paréntesis de apertura
        if (s[i]=='(' || s[i]=='[' || s[i]=='{')
            // Si es un paréntesis de apertura, lo insertamos en la pila 'pilaSignos'
            insertar(pilaSignos,s[i]);
        else {
            // Si el carácter actual es un paréntesis de cierre
            if (s[i]==')' && info(pilaSignos)=='(')
                // Verificar si el paréntesis de cierre coincide con el último paréntesis de apertura en la pila
                eliminar(pilaSignos); // Eliminar el paréntesis de apertura de la pila
            else
                resultado = false; // Si no coincide, establecer 'resultado' como falso
        }
        // Avanzar al siguiente carácter en la expresión
        i++;
    }

    // Comprobar si la expresión está equilibrada
    // Para estar equilibrada, 'resultado' debe ser verdadero y 'pilaSignos' debe estar vacía
    return resultado && esVacia(pilaSignos);
}

// Función principal
int main(){
    // Crear un vector 'signos' que contiene una expresión con paréntesis
    vector <char> signos;
    signos={'(','(',')',')'};

    // Llamar a la función 'EstaEquilibrada' con el vector 'signos' y verificar si la expresión está equilibrada
    if (EstaEquilibrada(signos))
        cout<<"La expresión es Correcta"<<endl; // Si está equilibrada, mostrar un mensaje
    else
        cout<<"La expresión NO es Correcta"<<endl; // Si no está equilibrada, mostrar un mensaje

    // Devolver 0 para indicar que el programa se ejecutó correctamente
    return 0;
}
