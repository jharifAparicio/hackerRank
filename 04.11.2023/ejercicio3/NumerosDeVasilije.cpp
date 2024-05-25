#include <iostream>
int main() {
    long long int t;
    std::cin >> t;
    while (t--) {
        long long int n, k, x,suma;
        std::cin >> n >> k >> x;
        suma = n*(n+1)/2;
        
        if((suma < x) ||
        (k == x) || 
        (n == 1)){
            std::cout << "NO" << std::endl;
        }else{
            std::cout << "YES" << std::endl;
        }
    }
    return 0;
}
