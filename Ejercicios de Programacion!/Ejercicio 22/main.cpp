#include <iostream>

using namespace std;

int suma(int x,int y)
{
    return x+y;
}
int resta(int x,int y)
{
    return x-y;
}
int multiplicacion(int x,int y)
{
    return x*y;
}
int division(int x,int y)
{
    return x/y;
}

int main()
{
    int (*calculadora[])(int,int)={suma,resta,multiplicacion,division};//boceto
    int x,y;
    cout << "Dame tu primer numero --> ";
    cin>>x;
    cout << "Dame tu segundo numero --> ";
    cin>>y;
    int opcion;
    cout << "Oprima 0 para sumar";
    cout << "\nOprima 1 para restar";
    cout << "\nOprima 2 para multiplicar";
    cout << "\nOprima 3 para dividir";
    cout << "\nSu opcion es 0,1,2 o 3? --> ";
    cin>>opcion;

    cout << "Tu respuesta es --> " << (calculadora[opcion])(x,y);

    return 0;
}
