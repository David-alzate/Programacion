#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <cctype>
#include <set>

using namespace std;

// Estructura para el TDA Cola
struct NodoCola {
    char dato;
    NodoCola* siguiente;
};

struct TDACola {
    NodoCola* frente;
    NodoCola* fin;
};

void inicializarCola(TDACola& c) {
    c.frente = nullptr;
    c.fin = nullptr;
}

bool esVacia(TDACola c) {
    return c.frente == nullptr;
}

void insertarAlFin(TDACola& c, char dato) {
    NodoCola* nuevoNodo = new NodoCola;
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = nullptr;
    if (esVacia(c)) {
        c.frente = nuevoNodo;
        c.fin = nuevoNodo;
    } else {
        c.fin->siguiente = nuevoNodo;
        c.fin = nuevoNodo;
    }
}

void eliminarInicio(TDACola& c) {
    if (!esVacia(c)) {
        NodoCola* nodoAEliminar = c.frente;
        c.frente = c.frente->siguiente;
        delete nodoAEliminar;
        if (c.frente == nullptr) {
            c.fin = nullptr;
        }
    }
}

char info(TDACola c) {
    if (!esVacia(c)) {
        return c.frente->dato;
    }
    return '\0';
}

// Estructura para el TDA Pila
struct NodoPila {
    char dato;
    NodoPila* siguiente;
};

struct TDAPila {
    NodoPila* tope;
};

void inicializarPila(TDAPila& p) {
    p.tope = nullptr;
}

bool esVacia(TDAPila p) {
    return p.tope == nullptr;
}

void insertarPila(TDAPila& p, char dato) {
    NodoPila* nuevoNodo = new NodoPila;
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = p.tope;
    p.tope = nuevoNodo;
}

void eliminarPila(TDAPila& p) {
    if (!esVacia(p)) {
        NodoPila* nodoAEliminar = p.tope;
        p.tope = p.tope->siguiente;
        delete nodoAEliminar;
    }
}

char infoPila(TDAPila p) {
    if (!esVacia(p)) {
        return p.tope->dato;
    }
    return '\0';
}

// estructura para tda lista
struct nodoLista{
    char dato;
    nodoLista *Sig;
};

struct ListaSencilla{
    nodoLista *cab;
    nodoLista *col;
};


nodoLista *crearNodo(){
    nodoLista *nuevo;
    nuevo=new(nodoLista);
    cout<<"Ingrese la letra: ";
    cin>>nuevo->dato;
    nuevo->Sig=NULL;
    return nuevo;
}

void Imprimir(nodoLista *Imp){
    if(Imp==NULL){
        cout<<"No hay datos";
    }
    else{
        cout<<Imp->dato<<" ";
    }
}

ListaSencilla crearLista(ListaSencilla &ls){
    if (ls.cab!=nullptr){
        cout<<"Error";
        return ls ;
    }
    else {
        ls.cab = crearNodo();
        ls.col =ls.cab;
        return ls;
    }
}

void mostrarInfoPrimerNodo(ListaSencilla ls){
	if (ls.cab==NULL){
		cout<<"Error"<<endl;
	}
	else {
		Imprimir(ls.cab);
	}
}

void eliminarLista(ListaSencilla &ls){
	ls.cab=NULL;
	ls.col=NULL;
}

void mostrarultimo(ListaSencilla ls){
    if (ls.col==NULL){
		cout<<"Error"<<endl;
	}
	else {
		Imprimir(ls.col);
	}

}


bool EsVacia(ListaSencilla ls)
{
    if (ls.cab==NULL)
        return true;
    else
        return false;
}

void recorrerLista(ListaSencilla ls)
{
    if(ls.cab != NULL)
    {
        nodoLista *aux;
        aux=ls.cab;

        while (aux!=NULL)
        {
            Imprimir(aux);
            aux = aux->Sig;
        }
    }
}

void insertarALfin(ListaSencilla ls)
{
    if(ls.cab == NULL){
        ls = crearLista(ls);
    }else{
        nodoLista *nuevo = crearNodo();
        ls.col->Sig=nuevo;
        ls.col=nuevo;
    }
}

void InsertarAlFinal(ListaSencilla & ls){
	if (ls.cab == NULL){
		ls = crearLista(ls);
	}
	else {
		nodoLista *nuevo = crearNodo();
		ls.col->Sig= nuevo;
		ls.col = nuevo;
	}
}

void InsertarAlInicio(ListaSencilla & ls){
	if (ls.cab == NULL){
		ls = crearLista(ls);
	}
	else {
		nodoLista *nuevo = crearNodo();
		nuevo->Sig= ls.cab;
		ls.cab= nuevo;
	}
}

void insertarDespuesDeOtro(ListaSencilla & ls, char dato){
    if (ls.cab == NULL){
        ls = crearLista(ls);
    }
    else {
        nodoLista *nuevo = crearNodo();
        nodoLista *aux;
        aux=ls.cab;
        while (aux!=NULL){
            if (aux->dato==dato){
                nuevo->Sig=aux->Sig;
                aux->Sig=nuevo;
                break;
            }
            aux=aux->Sig;
        }
    }
}


void eliminarInicio (ListaSencilla &ls){
    if (ls.cab == NULL){
        cout << "Error" << endl;
    } else {
        nodoLista *auxiliar = ls.cab;
        ls.cab = ls.cab ->Sig;
        delete auxiliar;
        cout << "Nodo borrado" << endl;
    }
}

void eliminarFin(ListaSencilla & ls){
    if (EsVacia(ls)){
        cout << "Error" <<endl;
    } else {
        nodoLista *auxiliar = ls.cab;
        while(auxiliar ->Sig != ls.col){
            auxiliar = auxiliar ->Sig;
        }
        delete ls.col;
        ls.col = auxiliar;
        auxiliar -> Sig = NULL;
        cout << "Nodo eliminado" <<endl;
    }
}


bool buscarDato(ListaSencilla ls, char dato)
{
    nodoLista *aux;
    aux=ls.cab;
    while (aux!=NULL)
    {
        if (aux->dato==dato)
            return true;
        aux=aux->Sig;
    }
    return false;
}

nodoLista* buscarDireccion(ListaSencilla ls, char dato)
{
    nodoLista *aux;
    aux=ls.cab;
    while (aux!=NULL)
    {
        if (aux->dato==dato)
            return aux;
        aux=aux->Sig;
    }
    return NULL;
}

void eliminarNodo(ListaSencilla &ls, char dato){

    nodoLista *borrar = buscarDireccion(ls,dato);
    if(borrar == nullptr){
            cout<<"Error"<<endl;

    }else{
        nodoLista *aux = ls.cab;
        while(aux->Sig != borrar){
            aux = aux->Sig;
        }
            aux->Sig = borrar->Sig;
            delete borrar;
            cout<<"Borrado"<<endl;



class JuegoAhorcado {
private:
    struct Palabra {
        string palabra;
        string pista;
        string sinonimo;
        string antonimo;
    };

    vector<Palabra> palabras;
    string palabraObjetivo;
    set<char> letrasIngresadas;
    TDACola letrasNoAdivinadas;
    int vidasRestantes;
    
    void dibujarAhorcado() {
        int vidas = vidasRestantes;
        cout << "Vidas restantes: " << vidas << endl;
        if (vidas < 6) {
            cout << "  __ " << endl;
            cout << " |    |" << endl;
        }
        if (vidas < 5) {
            cout << " |    O" << endl;
        }
        if (vidas < 4) {
            cout << " |   /";
            if (vidas < 3) {
                cout << "|";
            }
            cout << endl;
        }
        if (vidas < 2) {
            cout << " |   /";
            if (vidas < 1) {
                cout << " \\";
            }
            cout << endl;
        }
        cout << " |" << endl;
        cout << "|__" << endl;
    }

public:
    JuegoAhorcado() : vidasRestantes(6) {
        palabras.push_back({"perro", "Un animal domesticado que suele ser leal al ser humano.", "Mascota", "Fiera"});
        palabras.push_back({"gato", "Un felino doméstico que a menudo es independiente.", "Mascota", "Fiera"});
        palabras.push_back({"manzana", "Una fruta comestible de color rojo o verde.", "Fruta", "Dulce"});
        palabras.push_back({"computadora", "Una máquina electrónica que procesa información.", "Tecnología", "Analógico"});
        palabras.push_back({"balon", "herramienta con lo que se juega el futbol y el baloncesto", "Deportes", "Ajedrez"});
        palabras.push_back({"banano", "una fruta comestible que es de color amarillo", "Una fruta", "Caramelos"});
        palabras.push_back({"celular", " un dispositivo portátil que puede hacer o recibir llamadas a través de una portadora de radiofrecuencia", "Tecnologia", "Calculadora"});
        palabras.push_back({"rapido", " Se utiliza para describir a alguien que se mueve a gran velocidad. ", "Fugaz", "Lento"});
        palabras.push_back({"feliz", "Esta emoción te hace sonreír y sentirte bien. ", "Fugaz", "Lento"});

        srand(static_cast<unsigned int>(time(nullptr)));
        int indiceAleatorio = rand() % palabras.size();
        palabraObjetivo = palabras[indiceAleatorio].palabra;

        for (char letra = 'a'; letra <= 'z'; ++letra) {
            insertarAlFin(letrasNoAdivinadas, letra);
        }
    }

    void mostrarPalabra() {
        for (char letra : palabraObjetivo) {
            if (letrasIngresadas.count(tolower(letra))) {
                cout << letra << ' ';
            } else {
                cout << "_ ";
            }
        }
        cout << endl;
    }

    void mostrarLetrasIngresadas() {
        cout << "Letras Ingresadas: ";
        for (char letra : letrasIngresadas) {
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
                return palabra.sinonimo;
            }
        }
        return "Sinónimo no encontrado.";
    }
    void mostrarAntonimo() {
        cout << "Antónimo: " << obtenerAntonimo() << endl;
    }

    string obtenerAntonimo() const {
        for (const Palabra& palabra : palabras) {
            if (palabra.palabra == palabraObjetivo) {
                return palabra.antonimo;
            }
        }
        return "Antónimo no encontrado.";
    }

    void jugar() {
        while (vidasRestantes > 0) {
            mostrarPalabra();
            mostrarLetrasIngresadas();
            dibujarAhorcado();
    
            // Verifica si se han adivinado todas las letras
            bool todasAdivinadas = true;
            for (char letra : palabraObjetivo) {
                if (!letrasIngresadas.count(letra)) {
                    todasAdivinadas = false;
                    break;
                }
            }
    
            if (todasAdivinadas) {
                cout << "¡Felicidades, has adivinado la palabra! " << palabraObjetivo << endl;
                return;
            }
    
            string intento;
            cout << "Ingresa una letra (pista para Pista, sinonimo para Sinónimo ó antonimo para Antonimo ): ";
            cin >> intento;
    
            for (char &c : intento) {
                c = tolower(c);
            }
    
            if (intento == "pista") {
                mostrarPista();
            } else if (intento == "sinonimo") {
                mostrarSinonimo();
            }else if (intento == "antonimo"){
                mostrarAntonimo();
            } else if (intento.length() == 1 && isalpha(intento[0])) {
                char letra = tolower(intento[0]);
    
                bool letraYaAdivinada = letrasIngresadas.count(letra);
                if (letraYaAdivinada) {
                    cout << "¡Ya has intentado con esa letra!" << endl;
                } else {
                    letrasIngresadas.insert(letra);
    
                    bool letraCorrecta = false;
                    for (char &letraObjetivo : palabraObjetivo) {
                        if (tolower(letraObjetivo) == letra) {
                            letraCorrecta = true;
                            break;
                        }
                    }
    
                    if (letraCorrecta) {
                        cout << "¡Letra correcta!" << endl;
                    } else {
                        cout << "Letra incorrecta." << endl;
                        vidasRestantes--;
                    }
                }
            } else {
                cout << "Entrada no válida. Por favor, ingresa una letra o la opción correcta." << endl;
            }
        }
    
        cout << "¡Has agotado todas tus vidas! La palabra era: " << palabraObjetivo << endl;
    }
};

int main() {
    JuegoAhorcado juego;
    cout << "Adivina la palabra basada en la Pista, el Sinónimo y el Antónimo." << endl;
    juego.jugar();

    return 0;
}