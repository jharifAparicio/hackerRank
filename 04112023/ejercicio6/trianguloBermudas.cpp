#include <iostream>

using namespace std;

int main() {
    long long int t,n;
    cin >> t;
    for(int i = 0; i<t ;i++){
        cin >> n;
        n =  abs(n);
        long long  int m = 0;
        for(int j = 0; j<= n; j++){
            m = m + j;
        }
        cout << (m*(m+1))/2 << endl;
    }
    return 0;
}