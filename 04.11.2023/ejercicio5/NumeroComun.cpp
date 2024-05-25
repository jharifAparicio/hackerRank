#include <iostream>
#include <vector>

using namespace std;

int main() {
    //n -> tamaño de la matriz
    //k -> numero a buscar
    //t -> casos de prueba

    int n,k,t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector<int> a(n);   
        for(int i = 0;i < n; i++){
            cin >> a[i];
        }
        bool conf = false;

        for(int i = 0;i<n;i++){
            if(a[i] == k){
                conf = true;
                break;
            }else{
                conf = false;
            };
        }
        if(conf){
        cout << "YES"<< endl;
        }else{
            cout << "NO"<<endl;
        }

    }
    return 0;
}