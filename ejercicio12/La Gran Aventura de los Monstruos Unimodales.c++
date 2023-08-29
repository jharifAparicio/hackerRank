#include <iostream>
 using namespace std;

 int main (){
    int cantidad;
    bool increasing = true;
    cin >> cantidad;
    int elementos[cantidad];

    for(int i = 0; i < cantidad; i++){
        cin >> elementos[i];
    }

    for(int i = 0; i < cantidad; i++){
        if(increasing == true){
            if(elementos[i] > elementos[i+1]){
                increasing = true;
            }else if (!increasing){
                increasing = true;
            }
        }       
    }

    if(increasing == true){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
 }