#include <iostream>

using namespace std;

int SumaRecursiva(int arr[], int tamanio, int suma = 0)
{
    if(tamanio == 0)
    {
        return suma;
    }
    else
    {
        return SumaRecursiva(arr,--tamanio, suma += arr[tamanio - 1]);
    }
}

int main()
{
    int arr[4] = {1,2,3,4};
    cout << "La suma de los elementos de mi array es -> " << SumaRecursiva(arr,4);
    return 0;
}
