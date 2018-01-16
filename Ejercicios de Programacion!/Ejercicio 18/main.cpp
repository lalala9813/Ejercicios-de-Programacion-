#include <iostream>

using namespace std;

void printArray(int arr[],int tamanio)
{
    for(int i = 0; i < tamanio; i++)
    {
        cout << arr[i] << " ";
    }
}

void InvertirRecursivo(int arr[], int tamanio, int current)
{
    if(tamanio == current)
    {
        return;
    }
    else
    {
        int aux = arr[current];
        arr[current] = arr[tamanio - 1];
        arr[tamanio - 1] = aux;
        InvertirRecursivo(arr,--tamanio,++current);
    }
}

int main()
{
    int arr[4] = {1,2,3,4};
    cout << "Matriz antes de ser Invertida...\n";
    printArray(arr,4);
    InvertirRecursivo(arr,4,0);
    cout << "\nMatriz luego de ser Invertida...\n";
    printArray(arr,4);
    return 0;
}
