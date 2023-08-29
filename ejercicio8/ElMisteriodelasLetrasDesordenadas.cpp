#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int separar(string palabra, vector<char> &letras){
    for (char letra : palabra) {
    letras.push_back(letra);
  }
  return 0;
}

bool revisar(vector<char> letras,vector<char> &letrasRev){
  int cantidad = letras.size(); 
  int cont = 0;

  for (int  i = 0; i < letras.size(); i++){
    for(int j = 0; j < letrasRev.size(); j++){
      if(letras[i] == letrasRev[j]){
        letrasRev.erase(letrasRev.begin() + j);
        cont++;
        break;
      }
    }
  }
  if (cont == cantidad)  {
    return true;
  }else{
    return false;
  }
  
}

int main() {
    string Aprendiz,Maestro,Revuelto;

    cin>>Aprendiz>>Maestro>>Revuelto;

    vector<char> letrasAprendiz;
    vector<char> letrasMaestro;
    vector<char> letrasRevuelto;

    separar(Aprendiz,letrasAprendiz);
    separar(Maestro,letrasMaestro);
    separar(Revuelto,letrasRevuelto);

    bool one = revisar(letrasAprendiz,letrasRevuelto);
    bool two = revisar (letrasMaestro,letrasRevuelto);

    if(one == true || two == true || letrasRevuelto.size() == 0){
      cout<<"NO";
    }else{
      cout<<"YES";
    }

    return 0;
}
