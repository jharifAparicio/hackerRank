#include <iostream>
#include <string>

using namespace std;

void pedirHoras(string[]);
void revisar();
bool esPalindroma(const string &);

string ArrayHora[50];
int pos = 0;

int main()
{
    pedirHoras(ArrayHora);
    revisar();
    return 0;
}

void pedirHoras(string arrayHoras[])
{
    int HH, MM;
    cin >> HH >> MM;
    if (HH >= 0 && HH <= 23 && MM >= 0 && MM <= 59
    || HH != 0 && MM != 0)
    {
        int newHora = HH * 100 + MM;
        arrayHoras[pos] = std::to_string(newHora);
        pos++;
        pedirHoras(arrayHoras);
    }
    else
    {
        return;
    }
}

void revisar()
{
    for (int i = 0; i < pos; i++)
    {
        if (esPalindroma(ArrayHora[i]) && ArrayHora[i].length() == 4)
        {
            cout << "SI" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

bool esPalindroma(const string &hora)
{
    int inicio = 0;
    int fin = hora.length() - 1;

    while (inicio < fin)
    {
        if (hora[inicio] != hora[fin])
        {
            return false;
        }
        inicio++;
        fin--;
    }

    return true;
}