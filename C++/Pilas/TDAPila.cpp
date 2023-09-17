#include "TDANODOPILA.cpp"
struct TDAPila{
	nodo *tope;
};

bool esVacia (TDAPila p){
	if (p.tope==NULL)
		return true;
	else
		return false;
}

void insertar(TDAPila &p,char dato){
	nodo *aux;
	aux = crearNodo(dato);
	if (!esVacia (p)){
		aux->Sig = p.tope;
	}
	p.tope=aux;
}
void insertar(TDAPila &p){
	nodo *aux;
	aux = crearNodo();
	if (!esVacia (p)){
		aux->Sig = p.tope;
	}
	p.tope=aux;
}

void eliminar(TDAPila &p){
	nodo *aux;
    if (!esVacia (p)){
        aux = p.tope;
        p.tope = p.tope->Sig;
        borrarNodo(aux);
    }
}

char info(TDAPila p){
    if (!esVacia (p))
        return p.tope->info;
    else
        return '0';
}

