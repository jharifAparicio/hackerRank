#include <iostream>
#include <vector>

using namespace std;

int main(){
    int cantidad;
    int numero;
    vector<int> numeros;

    cin >> cantidad;

    for(int i = 0; i<cantidad; i++){
        
        for (int x; cin >> x && !cin.eof() ) {
            numeros.push_back(x);
        }
        
        for (int i = 0; i < numeros.size(); i++) {
            cout << numeros[i] << endl;
        }
  }

    return 0;
}