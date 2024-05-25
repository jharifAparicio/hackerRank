#include <iostream>

using namespace std;

int main() {
    long long int s,n,i;
    cin >> n;
    i = 1; s = 0;
    while(i <= n){
        s = s + (i *(i+2));
        i++;
    }
    cout << s;
    return 0;
}