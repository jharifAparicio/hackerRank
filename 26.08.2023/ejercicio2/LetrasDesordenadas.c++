#include <iostream>
#include <string>

using namespace std;

int main(){
    std::string Aprendiz,Mago,Revueltas, buscar, comparar;
    std::cin>>Aprendiz>>Mago>>Revueltas;

    std::string juntos = Aprendiz + Mago;

    //buscamos y eliminamos las letras que existe
    for (int j = 0; j < juntos.length(); j++) {
        buscar = juntos[j];
        for(int i = 0; i < Revueltas.length(); i++){
            if(juntos.length() == 1){
              cout <<"YES"<<endl;
                break;
            }else if(Revueltas.length() == 1 && juntos.length() != 1){
                std::cout<<"NO"<<std::endl;
                break;
            }

            comparar = Revueltas[i];

            if( comparar == buscar){
                Revueltas.replace(Revueltas.find(comparar),1,"");
                juntos.replace(juntos.find(comparar),1,"");
                break;
            }
        }
    }
    return 0;
}