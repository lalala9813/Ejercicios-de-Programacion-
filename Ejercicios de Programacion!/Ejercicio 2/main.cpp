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

int main()
{
    int n;
    cout << "Dame tu numero y te dire si es primo o no -> ";
    cin >> n;
    cout << "Es primo? True = 1, False = 0 -> " << Primo(n) << endl;
    return 0;
}
