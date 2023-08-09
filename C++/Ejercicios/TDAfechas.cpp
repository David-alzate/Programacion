#include <iostream>

using namespace std;

const int enero = 31;
const int febrero = 28;
const int marzo = 31;
const int abril = 30;
const int mayo = 31;
const int junio = 30;
const int julio = 31;
const int agosto = 31;
const int septiembre = 30;
const int octubre = 31;
const int noviembre = 30;
const int diciembre = 31;



struct TDAfechas
{
    int a1;
    int m1;
    int d1;
    int fecha1;
    int a2;
    int m2;
    int d2;
    int fecha2;
    int contard;
    int d;
    int m;
    int a;
    int diasdic;
    int anobisiesto;

};


TDAfechas ContarDias (TDAfechas a, TDAfechas m, TDAfechas d){
    TDAfechas resultado;
    TDAfechas resultadofecha1;
    TDAfechas resultadofecha2;
    TDAfechas resultadocontard;
    resultado.a1 = ((a.a1 * 365));
    if (m.m1 == 1){
        resultado.m1 =((m.m1 * enero));
    }else if (m.m1 == 2){
        resultado.m1 =((m.m1 * febrero));
    }else if (m.m1 == 3){
        resultado.m1 =((m.m1 * marzo));
    }else if (m.m1 == 4){
        resultado.m1 =((m.m1 * abril));
    }else if (m.m1 == 5){
        resultado.m1 =((m.m1 * mayo));
    }else if (m.m1 == 6){
        resultado.m1 =((m.m1 * junio));
    }else if (m.m1 == 7){
        resultado.m1 =((m.m1 * julio));
    }else if (m.m1 == 8){
        resultado.m1 =((m.m1 * agosto));
    }else if (m.m1 == 9){
        resultado.m1 =((m.m1 * septiembre));
    }else if (m.m1 == 10){
        resultado.m1 =((m.m1 * octubre));
    }else if (m.m1 == 11){
        resultado.m1 =((m.m1 * noviembre));
    }else if (m.m1 == 12){
        resultado.m1 =((m.m1 * diciembre));
    }
    resultado.d1 = (d.d1);
    resultadofecha1.fecha1 = ((resultado.a1) + (resultado.m1) + (resultado.d1));


    resultado.a2 = ((a.a2 * 365));
    if (m.m2 == 1){
        resultado.m2 =((m.m2 * enero));
    }else if (m.m2 == 2){
        resultado.m2 =((m.m2 * febrero));
    }else if (m.m2 == 3){
        resultado.m2 =((m.m2 * marzo));
    }else if (m.m2 == 4){
        resultado.m2 =((m.m2 * abril));
    }else if (m.m2 == 5){
        resultado.m2 =((m.m2 * mayo));
    }else if (m.m2 == 6){
        resultado.m2 =((m.m2 * junio));
    }else if (m.m2 == 7){
        resultado.m2 =((m.m2 * julio));
    }else if (m.m2 == 8){
        resultado.m2 =((m.m2 * agosto));
    }else if (m.m2 == 9){
        resultado.m2 =((m.m2 * septiembre));
    }else if (m.m2 == 10){
        resultado.m2 =((m.m2 * octubre));
    }else if (m.m2 == 11){
        resultado.m2 =((m.m2 * noviembre));
    }else if (m.m2 == 12){
        resultado.m2 =((m.m2 * diciembre));
    }
    resultado.d2 = (d.d2);

    resultadofecha2.fecha2 = ((resultado.a2) + (resultado.m2) + (resultado.d2));
    resultadocontard.contard = ((resultadofecha2.fecha2) - resultadofecha1.fecha1);
    return resultadocontard;

}

TDAfechas ingresar (TDAfechas d, TDAfechas m, TDAfechas a){
    TDAfechas resultado;

    resultado.d = (d.d);
    resultado.m = (m.m);
    resultado.a = (a.a);
    return resultado;
}

TDAfechas mostrar (TDAfechas d, TDAfechas m, TDAfechas a){
    TDAfechas resultado;

    resultado.d = (d.d);
    resultado.m = (m.m);
    resultado.a = (a.a);
    return resultado;
}

TDAfechas diasDic (TDAfechas a, TDAfechas m, TDAfechas d){
    TDAfechas resultado;
    TDAfechas resultadofecha1;
    TDAfechas resultadofecha2;
    TDAfechas resultadodiasdic;
    resultado.a1 = ((a.a1 * 365));
    if (m.m1 == 1){
        resultado.m1 =((m.m1 * enero));
    }else if (m.m1 == 2){
        resultado.m1 =((m.m1 * febrero));
    }else if (m.m1 == 3){
        resultado.m1 =((m.m1 * marzo));
    }else if (m.m1 == 4){
        resultado.m1 =((m.m1 * abril));
    }else if (m.m1 == 5){
        resultado.m1 =((m.m1 * mayo));
    }else if (m.m1 == 6){
        resultado.m1 =((m.m1 * junio));
    }else if (m.m1 == 7){
        resultado.m1 =((m.m1 * julio));
    }else if (m.m1 == 8){
        resultado.m1 =((m.m1 * agosto));
    }else if (m.m1 == 9){
        resultado.m1 =((m.m1 * septiembre));
    }else if (m.m1 == 10){
        resultado.m1 =((m.m1 * octubre));
    }else if (m.m1 == 11){
        resultado.m1 =((m.m1 * noviembre));
    }else if (m.m1 == 12){
        resultado.m1 =((m.m1 * diciembre));
    }
    resultado.d1 = (d.d1);

    resultado.a2 = ((a.a2 * 365));
    resultado.m2 = ((m.m2 * diciembre));
    resultado.d2 = (d.d2);
    resultadofecha1.fecha1 = ((resultado.a1) + (resultado.m1) + (resultado.d1));
    resultadofecha2.fecha2 = ((resultado.a2) + (resultado.m2) + (resultado.d2));
    resultadodiasdic.diasdic = ((resultadofecha2.fecha2) - resultadofecha1.fecha1);
    return resultadodiasdic;

}

TDAfechas anobisiesto (TDAfechas d, TDAfechas m, TDAfechas a){
    TDAfechas resultado;
    TDAfechas resultadobisiesto;

    resultado.d = (d.d);
    resultado.m = (m.m);
    resultado.a = (a.a);
    if (resultado.a % 4 == 0){
         resultadobisiesto.anobisiesto = (1);
    }else{
        resultadobisiesto.anobisiesto = (0);
    }
   
    return resultadobisiesto;
}


void diferenciadias(){
    TDAfechas ano,mes,dia,r;
    cout<< "Ingrese la fecha 1 " <<endl<<endl;

     do{
        cout<< "Ingrese el dia" <<endl;
        cin>> dia.d1;
    }while (dia.d1 > 31 || dia.d1 < 1);

    do{
        cout<< "Ingrese el mes" <<endl;
        cin>> mes.m1; 
    }while (mes.m1 > 12 || mes.m1 < 1);
    
    cout<< "Ingrese el año" <<endl;
    cin>> ano.a1;
    
    cout<< "Ingrese la fecha 2 " <<endl<<endl;

      do{
        cout<< "Ingrese el dia" <<endl;
        cin>> dia.d2;
    }while (dia.d2 > 31 || dia.d2 < 1);

    do{
        cout<< "Ingrese el mes" <<endl;
        cin>> mes.m2; 
    }while (mes.m2 > 12 || mes.m2 < 1);
    
    cout<< "Ingrese el año" <<endl;
    cin>> ano.a2;

    r = ContarDias(ano,mes,dia);
    cout<< r.fecha1 <<endl;
    cout<< "El numero de dias que hay entre las dos fechas es "<< r.contard <<endl;

    
}


void ingresarFecha(){

    TDAfechas d,m,a,r;
    cout<< "Ingrese la fecha 1 " <<endl<<endl;

     do{
        cout<< "Ingrese el dia" <<endl;
        cin>> d.d;
    }while (d.d > 31 || d.d < 1);

    do{
        cout<< "Ingrese el mes" <<endl;
        cin>> m.m; 
    }while (m.m > 12 || m.m < 1);
    
    cout<< "Ingrese el año" <<endl;
    cin>> a.a;

    r = ingresar(d,m,a);
    cout<< " La fecha es "<<d.d<<"/"<<m.m<<"/"<<a.a <<endl;

}

void mostrarFecha(){

    TDAfechas d,m,a,r;
    cout<< "Ingrese la fecha 1 " <<endl<<endl;

     do{
        cout<< "Ingrese el dia" <<endl;
        cin>> d.d;
    }while (d.d > 31 || d.d < 1);

    do{
        cout<< "Ingrese el mes" <<endl;
        cin>> m.m; 
    }while (m.m > 12 || m.m < 1);
    
    cout<< "Ingrese el año" <<endl;
    cin>> a.a;

    r = ingresar(d,m,a);
    cout<< " La fecha es "<<d.d<<"/"<<m.m<<"/"<<a.a <<endl;

}


void diasDiciembre(){
    TDAfechas ano,mes,dia,r,resultado;
    cout<< "Ingrese la fecha " <<endl<<endl;

     do{
        cout<< "Ingrese el dia" <<endl;
        cin>> dia.d1;
    }while (dia.d1 > 31 || dia.d1 < 1);

    do{
        cout<< "Ingrese el mes" <<endl;
        cin>> mes.m1; 
    }while (mes.m1 > 12 || mes.m1 < 1);
    
    cout<< "Ingrese el año" <<endl;
    cin>> ano.a1;

    dia.d2 = 1;
    mes.m2 = 12;
    ano.a2 = ano.a1;

    r = diasDic(ano,mes,dia);
    cout<< "El numero de dias que falta para diciembre es "<< r.diasdic <<endl;
    

}


void anobisies(){

    TDAfechas d,m,a,r;
    cout<< "Ingrese la fecha 1 " <<endl<<endl;

     do{
        cout<< "Ingrese el dia" <<endl;
        cin>> d.d;
    }while (d.d > 31 || d.d < 1);

    do{
        cout<< "Ingrese el mes" <<endl;
        cin>> m.m; 
    }while (m.m > 12 || m.m < 1);
    
    cout<< "Ingrese el año" <<endl;
    cin>> a.a;

    r = anobisiesto(d,m,a);
    cout<< "La fecha es "<<d.d<<"/"<<m.m<<"/"<<a.a <<endl;
    if (r.anobisiesto == 1){
        cout<< "Es un año bisiesto" <<endl;
    }else{
        cout<< "no es un año bisiesto" <<endl;
    }

}

int main() {

    int respuesta = 0;




    cout<< "Bienvenido seleccione la opcion que desea realizar"<<endl<< "1) Contar dias entre dos fechas "<<endl<<"2) Ingresar una fecha"<<endl<<"3) Mostrar una fecha"<<endl<<"4) Cuantos dias faltan para diciembre"<<endl<<"5) Año bisiesto"  <<endl;
    cin>> respuesta;

    if (respuesta == 1){
        diferenciadias();
    }else if (respuesta == 2 ){
        ingresarFecha();
    }else if (respuesta == 3){
        mostrarFecha();
    }else if (respuesta == 4){
         diasDiciembre();
    }else if (respuesta == 5){
        anobisies();
    }else{
        main();
    }
    return 0;
}