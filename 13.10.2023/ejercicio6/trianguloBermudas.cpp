#include <iostream>

using namespace std;
int main() {
    long int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        long int n, sum;
        cin >> n;
        sum = 0;
        n = abs(n);
        for(int j = 0; j < n+1; j++){
            sum = sum + j;
        }
        //formula de sumatoria

        sum = sum * (sum + 1) / 2;
        cout << sum << endl;
    }
    return 0;
}