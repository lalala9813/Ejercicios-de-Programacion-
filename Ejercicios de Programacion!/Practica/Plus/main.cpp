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
    unsigned long long int suma = 0;
    int candidatos = 2;
    for(int i = candidatos; i < n; i++)
    {
        Primo(candidatos);
        if(Primo(candidatos) == true)
        {
            suma += candidatos;
            cout << "\n" << candidatos;
        }
        candidatos++;
    }
    cout << "\nSuma -> " << suma;
    if(suma == 142913828922)
    {
        cout << "\n CORRECTO";
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
        cout << "La suma de os numeros primos menores de " << n << " es...\n";
        MinorPrime(n);
        cout << endl;
    }
    return 0;
}
