#include <iostream>

using namespace std;

int main (){
    long long int n,sum, i;
    cin >> n;
    sum = 0;
    i = 0;

    while(i < n){
        i++;
        sum = sum + i * (i+2);
        
    }

    cout << sum << endl;

    return 0;
}