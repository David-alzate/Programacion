#include <iostream>
using namespace std;

// estructura arboles
struct nodoAB
{
    int dato;
    nodoAB *izq;
    nodoAB *der;
};

nodoAB *crearNodoPedirDatos(){
    nodoAB *nuevo = new nodoAB;
    cout<<"Ingresar el dato: ";
    cin>>nuevo->dato;
    nuevo->izq = NULL;
    nuevo->der = NULL;
    return nuevo;
}
     
nodoAB *crearNodo(int dato)
{
    nodoAB *nuevo = new nodoAB;
    nuevo->dato = dato;
    nuevo->izq = NULL;
    nuevo->der = NULL;
    return nuevo;
}

void mostrarDatos(nodoAB *imprimir)
{
    cout<<"El dato es: "<<imprimir->dato<<endl;
}

bool tieneDatos (nodoAB *arbol){
    if(arbol!=NULL){
        return true;
    }else{
        return false;
    }
}

bool buscarDato (nodoAB *arbol, int dato){
     if(arbol==NULL){
        return false;
    }
    else
        if (arbol->dato==dato){
            return true;
        }
        else
            if (dato<arbol->dato){
                return buscarDato(arbol->izq, dato);
            }
            else{
                return buscarDato(arbol->der,  dato);
            }
}

bool buscarDatoNr (nodoAB *raiz, int dato){
    bool encontrado = false;
    nodoAB *aux =raiz;
    while (aux!=NULL && !encontrado){
        if (aux->dato==dato)
            encontrado = true;
        else
            if (dato < aux->dato)
                aux = aux->izq;
            else
                aux =aux->der;
    }
    return encontrado;
}

void ingresarNodos(nodoAB **arbol, int dato){
    // Caso 1
    if (!tieneDatos(*arbol)){
        *arbol = crearNodo(dato);
    }
    else{
        nodoAB *nuevo = crearNodo(dato);
        if (buscarDato(*arbol, nuevo->dato)){
            cout<<"Error";
        }
        else{
            nodoAB *aux = *arbol;
            nodoAB *ant;
            while(aux != NULL){
                ant = aux;
                if (aux->dato > nuevo->dato)
                    aux = aux->izq;
                else
                    aux = aux->der;
            }
            if (nuevo->dato > ant->dato)
                ant ->der = nuevo;
            else
                ant ->izq = nuevo;
        }
    }
}

void Preorden(nodoAB *arbol){
    if (arbol!=NULL){
        mostrarDatos(arbol);
        Preorden(arbol->izq);
        Preorden(arbol->der);
    }
}

void Postorden(nodoAB *arbol){
    if (arbol!=NULL){
        Postorden(arbol->izq);
        Postorden(arbol->der);
        mostrarDatos(arbol);
    }
}

void EliminarNodos(nodoAB **arbol, int codigo){
    if(!buscarDatoNr(*arbol, codigo)){
        cout<<"El dato no existe"<<endl;
    }else{
        nodoAB *aux = *arbol;
        nodoAB *ant = NULL;
        while (aux->dato != codigo){
            ant = aux;
            if (aux->dato > codigo){
                aux = aux->izq;
            }else{
                aux = aux->der;
            }
        }
        //caso 2.1 cuando el nodo es hoja
        if (aux->izq == NULL && aux->der == NULL){
            if (ant->izq == aux){
                ant->izq = NULL;
            }else{
                ant->der = NULL;
            }
            delete aux;
        }else{
            //caso 2.2 cuando el nodo tiene un hijo
            if (aux->izq == NULL || aux->der == NULL){
                if (ant->izq == aux){
                    if (aux->izq != NULL){
                        ant->izq = aux->izq;
                    }else{
                        ant->izq = aux->der;
                    }
                }else{
                    if (aux->izq != NULL){
                        ant->der = aux->izq;
                    }else{
                        ant->der = aux->der;
                    }
                }
                delete aux;
            }else{  //caso 2.3 cuando el nodo tiene dos hijos
                nodoAB *aux2 = aux->der;
                nodoAB *ant2 = aux;
                while (aux2->izq != NULL){
                    ant2 = aux2;
                    aux2 = aux2->izq;
                }
                if (ant2->izq == aux2){
                    ant2->izq = aux2->der;
                }else{
                    ant2->der = aux2->der;
                }
                delete aux2;
            }
        }
    }
}