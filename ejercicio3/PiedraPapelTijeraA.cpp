#include <iostream>

using namespace std;

int main(){
    int X,Z;
    cin>>X;
    cin>>Z;

    if((X == 1 && Z== 2) ||
    (X == 2 && Z == 3)||
    (X == 3 && Z == 1)){
        cout<< "B"<<endl;
    }else
    if((X == 2 && Z== 1) ||
    (X == 3 && Z == 2)||
    (X == 1 && Z == 3)){
        cout<< "A"<<endl;
    }else{
        cout<< "Empate"<<endl;
    }
}
