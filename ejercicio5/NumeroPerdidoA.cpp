#include <iostream>

   
int main(){
    unsigned long long int n;
    std::cin >> n;
    unsigned long long int sumNum = 0;
    unsigned long long int num;

    // Se lee n-1 números y se calcula la suma
    for (unsigned long long int i = 0; i < n - 1; i++) {
        std::cin >> num;
        sumNum += num;
    }

    // Se calcula la suma total esperada
    unsigned long long int sumaTotal = (n * (n + 1)) / 2;

    // Se encuentra el número faltante
    unsigned  long long int numeroFaltante = sumaTotal - sumNum;
    std::cout << numeroFaltante;
    return 0;
}