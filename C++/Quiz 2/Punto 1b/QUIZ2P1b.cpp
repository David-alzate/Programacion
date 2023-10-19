#include <iostream>
#include <vector>
#include "TDACola.cpp"
#include "TDAListaSencilla.cpp"
#include <ctime>
#include <fstream>
#include <sstream>
#include <cstdlib> 

using namespace std;


void crearColaTecnicos (cola CTecnicos, lisSencilla lisMante) {
    // generar un random de 1 hasta 5 tecnicos para las 5 familias de procesadores
    int MaxTecnicosAlz[5];
    for (int i = 0; i < 5 ; i ++){
        MaxTecnicosAlz[i] = rand() % 5 + 1;  
    }
    
    // Crear un vector para contar cuántos tecnicos hay por cada procesador
    // [0] = Ryzen
    // [1] = Intel
    // [2] = AMD
    // [3] = EPYC
    // [4] = Otros
    int TecnicosPorProcesor[] = {0,0,0,0,0};


// contar cuantos procesadores del mismo tipo hay y asignarlo a las cola

nodo *auxAlz = lisMante.cab;
nodo *anteriorAlz = nullptr; // Puntero al nodo anterior 
while (auxAlz != nullptr)
{   
    bool procesadorAsignadoAlz = false;
    if (auxAlz->info.procesador == "Ryzen")
    {
        TecnicosPorProcesor[0] += 1;
        insertarAlFinal(CTecnicos,auxAlz->info);
        procesadorAsignadoAlz = true;
    }
    else if (auxAlz->info.procesador == "Intel")
    {
        TecnicosPorProcesor[1] += 1;
        insertarAlFinal(CTecnicos,auxAlz->info);
        procesadorAsignadoAlz = true;
    }
    else if (auxAlz->info.procesador == "AMD")
    {
        TecnicosPorProcesor[2] += 1;
        insertarAlFinal(CTecnicos,auxAlz->info);
        procesadorAsignadoAlz = true;
    }
    else if (auxAlz->info.procesador == "EPYC")
    {
        TecnicosPorProcesor[3] += 1;
        insertarAlFinal(CTecnicos,auxAlz->info);
        procesadorAsignadoAlz = true;
    }
    else if (auxAlz->info.procesador == "Fujitsu" || auxAlz->info.procesador == "Sunway")
    {
        TecnicosPorProcesor[4] += 1;
        insertarAlFinal(CTecnicos,auxAlz->info);
        procesadorAsignadoAlz = true;
    }
    anteriorAlz = auxAlz;
    auxAlz = auxAlz->sig;

    if (procesadorAsignadoAlz)
    {
        // Eliminar procesador de la lista de mantenimiento
        if (anteriorAlz == nullptr){
            // si es el primero 
            nodo *borrarAlz = auxAlz;
            auxAlz = auxAlz->sig;
            lisMante.cab = auxAlz;
            delete borrarAlz;
        }else{
            // si no es el primero enlaza el nodo al anterior siguiente 
            nodo *borrarAlz = auxAlz;
            auxAlz = auxAlz->sig;
            anteriorAlz->sig = auxAlz;
            delete borrarAlz;
        }
    }else{
        // Si el procesador no fue asignado a ninguna cola de tecnicos
        anteriorAlz = auxAlz;
        auxAlz = auxAlz->sig;
    }
}



}

void llenarListaMantenimiento(lisSencilla &Lis)
{
    fstream file;
    file.open("matenimiento.txt", ios::in);
    if (!file)
    {
        cout<<"ERROR!";
    }
    else
    {
        string line;
        string lectura;
        while (getline(file,line)){
            stringstream iss(line);
            vector <string> resultado;
            while (getline(iss, lectura, '-')){
                resultado.push_back(lectura);
            }
            computador comp;
            comp.nombreCliente = resultado[0];
            comp.procesador = resultado[1];
            comp.tipoProblema = resultado[2];
            comp.marca = resultado[3];
            InsertarAlFinalL(Lis,comp);
        }
    }
}

void simular (int NroMinutos)
{
    cola tecnicoAlz;
    lisSencilla Lista_mantenimientos;
    llenarListaMantenimiento(Lista_mantenimientos);

    // Definir los tiempos de atencion por rango de edad 
    int tiempoAtencionAlz[5] = {17,12,14,18,5};

    // inicializar los contadores de procesadores atendidos
    int procesadoresAtendidosAlz[5] = {0,0,0,0,0};

    // Lista para almacenar los pacientes atendidos durante la simulacion 
    lisSencilla pacientesAtendidosAlz;
    inicializarLista(pacientesAtendidosAlz);

    // inicializar el tiempo en minutos 
    int tiempoTranscurridoAlz = 0;

    // Simulacion 
    while (tiempoTranscurridoAlz < NroMinutos)
    {
        for (int rangoAlz = 0 ; rangoAlz < 5 ; rangoAlz ++){
            tiempoTranscurridoAlz += tiempoAtencionAlz[rangoAlz];
            computador pacienteAlz = Frente(tecnicoAlz)->info;
            insertarAlFinal(pacientesAtendidosAlz,pacienteAlz);
            procesadoresAtendidosAlz[rangoAlz] += 1;}
            eliminarInicio(Lista_mantenimientos);
        }
    }

    // Realizar ek tiemopo de descanzo de tecnicos otros 
    int tiempoDescanzoAlz = 10;
    tiempotranscurridoAlz += tiempoDescanzoAlz;

    // Si pasa el tiemopo de simulacion salir
    if (tiempoTranscurridoAlz >= NroMinutos)
    {
        break;
    }

    // Reporte 
    cout<< "Procesadores no atendidos" <<endl;
    imprimirLista(Lista_mantenimientos);



int main()
{
    lisSencilla Lista_mantenimientos;
    Lista_mantenimientos.cab = Lista_mantenimientos.col= NULL;
    llenarListaMantenimiento(Lista_mantenimientos);
    imprimirLista(Lista_mantenimientos);
    cola tecnicoA;
    crearColaTecnicos(tecnicoA,Lista_mantenimientos);
    simular(110); 

    return 0;
}
