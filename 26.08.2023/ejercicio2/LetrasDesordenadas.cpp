#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    string aprendiz,maestro,letras;
    cin>>aprendiz>>maestro>>letras;

    string juntos = aprendiz + maestro;

    sort(juntos.begin(),juntos.end());
    sort(letras.begin(),letras.end());

    cout << (juntos == letras ? "YES" : "NO") << endl;

    return 0;
}
