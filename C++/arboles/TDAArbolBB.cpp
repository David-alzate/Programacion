#include "TDANodoAB.cpp"

bool tieneDatos (nodoAB *arbol){
    if(arbol!=NULL){
        return true;
    }else{
        return false;
    }
}

bool buscarCod (nodoAB *arbol, int cod){
     if(arbol==NULL){
        return false;
    }
    else
        if (arbol->cod==cod){
            return true;
        }
        else
            if (cod<arbol->cod){
                return buscarCod(arbol->izq, cod);
            }
            else{
                return buscarCod(arbol->der,  cod);
            }
}
bool buscarNodoNR (nodoAB *raiz, int cod){
    bool encontrado = false;
    nodoAB *aux =raiz;
    while (aux!=NULL && !encontrado){
        if (aux->cod==cod)
            encontrado = true;
        else
            if (cod < aux->cod)
                aux = aux->izq;
            else
                aux =aux->der;
    }
    return encontrado;
}

void ingresarNodos(nodoAB **arbol){
    // Caso 1
    if (!tieneDatos(*arbol)){
        *arbol = crearNodo();
    }
    else{
        nodoAB *nuevo = crearNodo();
        if (buscarCod(*arbol, nuevo->cod)){
            cout<<"Error";
        }
        else{
            nodoAB *aux = *arbol;
            nodoAB *ant;
            while(aux != NULL){
                ant = aux;
                if (aux->cod > nuevo->cod)
                    aux = aux->izq;
                else
                    aux = aux->der;
            }
            if (nuevo->cod > ant->cod)
                ant ->der = nuevo;
            else
                ant ->izq = nuevo;
        }
    }
}

void Inorden(nodoAB *arbol){
    if (arbol!=NULL){
        Inorden(arbol->izq);
        mostrarDatos(arbol);
        Inorden(arbol->der);
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
    if(!buscarNodoNR(*arbol, codigo)){
        cout<<"El dato no existe"<<endl;
    }else{
        nodoAB *aux = *arbol;
        nodoAB *ant = NULL;
        while (aux->cod != codigo){
            ant = aux;
            if (aux->cod > codigo){
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
