#include <iostream>

using namespace std;

void PrintArray(int arr[], int tamanio)
{
    for(int i = 0; i < tamanio; i++)
    {
        cout << arr[i] << " ";
    }
}

void BurbleInvertido(int arr[], int tamanio)
{
    int aux;
    for(int i = 0; i < tamanio; i++)
    {
        for(int j = i + 1; j < tamanio; j++)
        {
            if(arr[i] < arr[j])
            {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
    PrintArray(arr,tamanio);
}

int main()
{
    int arr[8] = {3,7,0,5,2,1,4,6};
    cout << "Tu array ordenado de manera descendente es...\n";
    BurbleInvertido(arr,8);
    return 0;
}
