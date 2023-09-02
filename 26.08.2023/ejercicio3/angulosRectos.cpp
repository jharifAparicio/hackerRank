#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int cant;
    cin >> cant;
    int a, a1, b, b1, c, c1;

    vector <string> confirmacion;

    for(int i=0; i<cant ;i++){
        cin >> a >> a1 >> b >> b1 >> c >> c1;
        //convierte a , a1, b, b1, c, c1 en positivos
        a = abs(a);
        a1 = abs(a1);
        b = abs(b);
        b1 = abs(b1);
        c = abs(c);
        c1 = abs(c1);

        if(a == b || a == c || b == c || a1 == b1 || a1 == b1 || b1 == c1){
            confirmacion.push_back("SI");
        }else{
            confirmacion.push_back("NO");
        }
    }
    
    for(int i=0; i<cant ;i++){
        cout << confirmacion[i] << endl;
    }

    return 0;
}
