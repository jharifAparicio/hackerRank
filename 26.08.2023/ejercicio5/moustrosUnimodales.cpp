#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int cant;
    bool creciente = true;
    bool decreciente = false;

    cin >> cant;
    vector<int> cadena (cant);

    for(int i=0; i<cant ;i++){
        cin>>cadena[i];
    }

    if(cadena.size() == 0){
    for(int j = 0; j < cant-1; j++){
        if( cadena[j] < cadena[j+1]){
            creciente = true;
        }else{
            creciente = false;
            decreciente = true;
        }

        if (creciente && decreciente){
            cout << "NO" << endl;
            return 0;
        }
    }
    }
    
    cout << "YES" << endl;

    return 0;
}
