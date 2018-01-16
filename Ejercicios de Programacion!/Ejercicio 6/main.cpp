#include <iostream>

using namespace std;

bool SeraPotenciaDe2(int n)
{
    return ((n != 0) && ((n & (n - 1)) == 0));
}

int main()
{
    int numero;
    cout << "Dame tu numero para saber si es potencia de 2 -> ";
    cin >> numero;
    cout << "Es potencia de 2? True = 1, False = 0 -> " << SeraPotenciaDe2(numero) << endl;
    return 0;
}
