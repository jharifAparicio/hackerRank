#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n [5][5];

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>n[i][j];
        }
    }
    //busca el 1
    int x,y;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(n[i][j]==1){
                x=i;
                y=j;
            }
        }
    }

    //calcula cuantos movimientos debe hacer el uno para llegar a la posicion 3,3
    int movimientos=0;
    while(x!=2){
        if(x>2){
            x--;
            movimientos++;
        }else{
            x++;
            movimientos++;
        }
    }
    
    while(y!=2){
        if(y>2){
            y--;
            movimientos++;
        }else{
            y++;
            movimientos++;
        }
    }

    cout << movimientos << endl;

    return 0;
}
