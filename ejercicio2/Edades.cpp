#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct Fecha {
    int dia;
    int mes;
    int anio;
};

int main() {
    Fecha* FechaNac = new Fecha;
    Fecha* FechaAct = new Fecha;

    cin>>FechaNac->dia>>FechaNac->mes>>FechaNac->anio; //fecha de nacimiento
    cin>>FechaAct->dia>>FechaAct->mes>>FechaAct->anio; //fecha actual

    if(FechaNac->dia >=31){
        FechaNac->dia = 30;
        if(FechaAct->dia >= 31){
            FechaAct->dia = 30;
        }
    }

    if(FechaNac->mes < 6 || FechaAct->mes > 6){
        return FechaAct->anio - FechaNac->anio ;
    }else{
        return FechaAct->anio - FechaNac->anio - 1;
    }
}