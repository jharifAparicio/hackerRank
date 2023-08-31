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
    int  contador = 0;
    int cant = juntos.length();

    //int aprendiz 
    //cout <<endl;
    //cout << aprendiz<<endl<<maestro<<endl<<juntos<<endl<<letras<<endl;

    while (juntos.length() != 0) {
        for(int i = 0; i <= letras.length(); i++){
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

    if(juntos.length() != 0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    
    
    return 0;
}
