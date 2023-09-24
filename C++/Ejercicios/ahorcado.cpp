#include <iostream>
#include <string>
#include <vector>
#include <queue>  // Incluimos la biblioteca para colas
#include <stack>  // Incluimos la biblioteca para pilas
#include <ctime>
#include <cstdlib>
#include <cctype> // Necesario para tolower
#include <set>    // Incluimos la biblioteca para conjuntos

using namespace std;

class JuegoAhorcado {
private:
    struct Palabra {
        string palabra;
        string definicion;
        string pista;
    };

    vector<Palabra> palabras;
    string palabraObjetivo;
    set<char> letrasAdivinadas;  // Cambiamos a set para llevar un registro de letras adivinadas
    queue<char> letrasNoAdivinadas;  // Cola para letras no adivinadas
    int vidasRestantes;

public:
    JuegoAhorcado() : vidasRestantes(6) {
        // Agrega palabras, definiciones y pistas a la lista
        palabras.push_back({"perro", "Un animal domesticado que suele ser leal al ser humano.", "Animal"});
        palabras.push_back({"gato", "Un felino doméstico que a menudo es independiente.", "Animal"});
        palabras.push_back({"manzana", "Una fruta comestible de color rojo o verde.", "Fruta"});
        palabras.push_back({"computadora", "Una máquina electrónica que procesa información.", "Tecnología"});
        
        // Selecciona una palabra aleatoria de la lista
        srand(static_cast<unsigned int>(time(nullptr)));
        int indiceAleatorio = rand() % palabras.size();
        palabraObjetivo = palabras[indiceAleatorio].palabra;
        
        // Llenar la cola de letras no adivinadas
        for (char letra = 'a'; letra <= 'z'; ++letra) {
            letrasNoAdivinadas.push(letra);
        }
    }

    void mostrarPalabra() {
        // Mostrar la palabra con espacios para las letras no adivinadas
        for (char letra : palabraObjetivo) {
            if (letrasAdivinadas.count(tolower(letra))) {
                cout << letra << ' ';
            } else {
                cout << "_ ";
            }
        }
        cout << endl;
    }

    void mostrarLetrasAdivinadas() {
        cout << "Letras adivinadas: ";
        for (char letra : letrasAdivinadas) {
            cout << letra << ' ';
        }
        cout << endl;
    }

    void mostrarPista() {
        cout << "Pista: " << obtenerPista() << endl;
    }

    string obtenerPista() const {
        for (const Palabra& palabra : palabras) {
            if (palabra.palabra == palabraObjetivo) {
                return palabra.pista;
            }
        }
        return "Pista no encontrada.";
    }

    void mostrarSinonimo() {
        cout << "Sinónimo: " << obtenerSinonimo() << endl;
    }

    string obtenerSinonimo() const {
        for (const Palabra& palabra : palabras) {
            if (palabra.palabra == palabraObjetivo) {
                return palabra.definicion;
            }
        }
        return "Sinónimo no encontrado.";
    }

    void jugar() {
        while (vidasRestantes > 0) {
            mostrarPalabra();
            mostrarLetrasAdivinadas();

            char intento;
            cout << "Ingresa una letra (P para pista, S para sinónimo): ";
            cin >> intento;
            intento = tolower(intento); // Convertir a minúscula

            if (intento == 'p') {
                mostrarPista();
            } else if (intento == 's') {
                mostrarSinonimo();
            } else {
                if (letrasAdivinadas.count(intento)) {
                    cout << "Ya has intentado con esa letra." << endl;
                } else {
                    // Verificamos si la cola de letras no adivinadas está vacía antes de intentar obtener una letra
                    if (!letrasNoAdivinadas.empty()) {
                        char letraNoAdivinada = letrasNoAdivinadas.front();
                        letrasNoAdivinadas.pop();
                        letrasAdivinadas.insert(intento);  // Insertar la letra en letras adivinadas

                        bool letraCorrecta = false;
                        for (char letra : palabraObjetivo) {
                            if (letrasAdivinadas.count(tolower(letra))) {
                                cout << letra << ' ';
                            } else {
                                cout << "_ ";
                                if (tolower(intento) == tolower(letra)) {
                                    letraCorrecta = true;
                                }
                            }
                        }
                        cout << endl;

                        if (letraCorrecta) {
                            cout << "¡Letra correcta!" << endl;
                            if (palabraAdivinada()) {
                                cout << "¡Felicidades, has adivinado la palabra!" << endl;
                                break;
                            }
                        } else {
                            cout << "Letra incorrecta." << endl;
                            vidasRestantes--;
                        }
                    } else {
                        cout << "Ya has adivinado todas las letras posibles." << endl;
                    }
                }
            }
        }

        if (vidasRestantes == 0) {
            cout << "¡Has agotado todas tus vidas! La palabra era: " << palabraObjetivo << endl;
        }
    }

    bool palabraAdivinada() {
        for (char letra : palabraObjetivo) {
            if (!letrasAdivinadas.count(tolower(letra))) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    JuegoAhorcado juego;
    cout << "Adivina la palabra basada en la definición y la pista." << endl;
    juego.jugar();

    return 0;
}
