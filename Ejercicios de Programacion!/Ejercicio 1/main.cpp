#include <iostream>

using namespace std;

bool Bisiesto(int anio)
{
    if(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout << "Dame el anho para saber si es Bisiesto -> ";
    cin >> n;
    cout << "Es Bisiesto? True = 1, False = 0 -> " << Bisiesto(n) << endl;
    return 0;
}
