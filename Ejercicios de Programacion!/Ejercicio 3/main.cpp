#include <iostream>

using namespace std;

bool Primo(int numero)
{
    int divisores = 0;
    for(int i = 1; i <= numero; i++)
    {
        if(numero % i == 0)
        {
            divisores++;
        }
    }

    bool x;

    if(divisores == 2)
    {
        x = true;
        return x;
    }
    else
    {
        x = false;
        return x;
    }
}

void MinorPrime(int n)
{
    int candidatos = 2;
    for(int i = candidatos; i < n; i++)
    {
        Primo(candidatos);
        if(Primo(candidatos) == true)
        {
            cout << candidatos << " ";
        }
        candidatos++;
    }
}

int main()
{
    int n;
    cout << "Dame el numero para imprimirte sus numeros primos menores -> ";
    cin >> n;

    if(n == 1 || n == 0 || n == 2)
    {
        cout << "Recuerda! Los numeros primos son mayores que 1 y 2 es el primer numero primo\n";
    }
    else
    {
        cout << "Los numeros primos menores de " << n << " son...\n";
        MinorPrime(n);
        cout << endl;
    }
    return 0;
}
