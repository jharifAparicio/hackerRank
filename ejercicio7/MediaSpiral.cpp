#include <iostream>

using namespace std;
int main(){

    int N,aux,aux1;

    int n = 0;
    cin >> N;
    aux = 0;
    aux1 = N+1;

    for(int i = 0; i < N; i++){

        switch (n) {
        case 0:
            aux++;
            cout << aux <<" ";
            break;
        case 1:
            aux1--;
            cout << aux1 << " ";
            break;
        case 2:
            aux1--;
            cout << aux1 << " ";
            break;
        case 3:
            aux++;
            cout << aux << " ";
            n=-1;
            break;
        }
        n++;
    }
}