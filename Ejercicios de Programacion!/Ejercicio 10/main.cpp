#include <iostream>

using namespace std;

void printArray(int arr[],int tamanio)
{
    for(int i = 0; i < tamanio; i++)
    {
        cout << arr[i] << " ";
    }
}

void QuickSort(int arr[], int inicio, int final, int tamanio)
{
    int i = inicio, f = final, aux;
    int pivot = arr[(inicio + final) / 2];

    do
    {
        while(arr[i] < pivot && f <= final)
        {
            i++;
        }
        while(pivot < arr[f] && f > inicio)
        {
            f--;
        }
        if(i <= f)
        {
            aux = arr[i];
            arr[i] = arr[f];
            arr[f] = aux;
            i++;
            f--;
        }
    }
    while(i <= f);

    if(inicio < f)
    {
        QuickSort(arr,inicio,f,tamanio);
    }
    if(i < final)
    {
        QuickSort(arr,i,final,tamanio);
    }
}

int main()
{
    cout << "Ordenando el array por QuickSort...\n";
    int arr[8] = {3,8,1,2,6,4,7,5};
    QuickSort(arr,0,7,8);
    printArray(arr,8);
    return 0;
}
