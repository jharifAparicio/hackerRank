#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string aprendiz,maestro,letras;
    cin>>aprendiz>>maestro>>letras;

    string juntos = aprendiz + maestro;
    int  contador = -1;
    int cant = juntos.length();


    while (juntos.length() != 0) {
        for(size_t i = 0; i <= letras.length(); i++){
            if(letras[i] == juntos[0]){
                letras.erase(i,1);
                juntos.erase(0,1);
                break;
            }
        }

        contador++;
        if(contador == cant){
            cout<<"NO"<<endl;
            return 0;
        }     
    }
    cout<<"YES"<<endl;    
    return 0;
}
