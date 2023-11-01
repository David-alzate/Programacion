#include <iostream>

using namespace std;

struct nodoAdya
{
    nodoAdya* sig;
    struct vertice* vert;
};

struct vertice
{
    int valor;
    vertice* sig;
    nodoAdya* listaAdy;
};

struct grafo
{
    vertice* cab;
    vertice* cola;
};

void anadirVertice(grafo* G, vertice* V)
{
    if (G->cab == nullptr)
    {
        G->cab = V;
        G->cola = V;
    }
    else
    {
        G->cola->sig = V;
        G->cola = V;
    }
}

void esAdyacente(grafo* g, vertice* V1, vertice* V2){
    nodoAdya* aux = V1->listaAdy;
    while(aux != nullptr){
        if(aux->vert == V2){
            cout << "Son adyacentes" << endl;
            return;
        }
        aux = aux->sig;
    }
    cout << "No son adyacentes" << endl;
}


int main()
{
    grafo G;
    G.cab = nullptr;
    G.cola = nullptr;

    vertice V1;
    V1.valor = 1;
    V1.sig = nullptr;
    V1.listaAdy = nullptr;

    vertice V2;
    V2.valor = 2;
    V2.sig = nullptr;
    V2.listaAdy = nullptr;

    nodoAdya ady1;
    ady1.sig = nullptr;
    ady1.vert = &V2;

    V1.listaAdy = &ady1;

    anadirVertice(&G, &V1);
    anadirVertice(&G, &V2);

    esAdyacente(&G, &V1, &V2);

    return 0;
}
