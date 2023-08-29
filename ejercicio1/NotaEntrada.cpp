#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float nl,t,ep;
    float Entrada,Minimo;
    
    cin>>nl>>t>>ep;

    Entrada = nl*0.25 + t*0.10 + ep*0.30;

    Minimo = 51-Entrada;

    cout << "Entrada = "<< setprecision(1)<<fixed<<Entrada << endl
    << "Minimo = "<< setprecision(1)<<fixed<<Minimo << endl;
    return 0;
}