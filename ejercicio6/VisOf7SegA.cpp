#include <iostream>
#include <vector>

void analizar(int hours, std::vector<int> segmentos) {

    std::vector<int> contadores = {};
    int digito;
    int CantSegmentos = 0;

    int aux = hours;

    //separa los digitos de la hora
    for (int i = 0; aux> 0; i++) {
        digito = aux % 10;
        aux = aux / 10;
        contadores.push_back(digito);
    }
    //rota el vector de contadores
    for (int i = 0; i < contadores.size() / 2; i++) {
        int temp = contadores[i];
        contadores[i] = contadores[contadores.size() - 1 - i];
        contadores[contadores.size() - 1 - i] = temp;
    }

    //suma los segmentos de cada digito
    for(int i= 0; i<contadores.size();i++){
        CantSegmentos = CantSegmentos + segmentos[contadores[i]];
    }

    std::cout << CantSegmentos << std::endl;
    std::cout << hours << std::endl;

    //generamos el numero mas grande posible
    if(CantSegmentos%2 == 0){
        for(int i=0; i<CantSegmentos/2;i++){
            std::cout << 1;
        }
    }else{
        std::cout << 7;
        for(int i=0; i<(CantSegmentos-3)/2;i++){
            std::cout << 1;
        }
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> horas;
    int cant, hora,minuto,hours;

    std::cin >> cant;
    std::vector<int> segmentos{
        6,2,5,5,4,5,
        6,3,7,6
    };

    for(int i = 0; i < cant; i++) {
        std::cin >> hora >> minuto;
        if((hora>=0 & hora<=23)&(minuto>=0 & minuto<=59)){
            horas.push_back(hora*100+minuto);
        }
    }
    
    for(int i = 0; i < horas.size(); i++) {
        hours = horas[i];
        analizar(hours,segmentos);
    }

    return 0;
}