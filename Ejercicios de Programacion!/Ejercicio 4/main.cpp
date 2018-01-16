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

void PrintPrimes(int n)
{
    int prime = 2;
    for(int i = 0; i < n; i++)
    {
        Primo(prime);
        if(Primo(prime) == true)
        {
            cout << prime << " ";
        }
        else
        {
            n++;
        }
        prime++;

    }
}

int main()
{
    int num;
    cout << "Dame la cantidad de numeros primos a imprimir -> ";
    cin >> num;
    cout << "Los " << num << " primeros numeros primos son...\n";
    PrintPrimes(num);
    return 0;
}
