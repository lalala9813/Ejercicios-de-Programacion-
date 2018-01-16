#include <iostream>

using namespace std;

void printArray(int arr[],int tamanio)
{
    for(int i = 0; i < tamanio; i++)
    {
        cout << arr[i] << " ";
    }
}

void BubbleSort(int arr[], int tamanio)
{
    int aux;
    for(int i = 0; i < tamanio; i++)
    {
        for(int j = i + 1; j < tamanio; j++)
        {
            if(arr[i] > arr[j])
            {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
    printArray(arr,tamanio);
}

int main()
{
    cout << "Ordenando el array por BubbleSort...\n";
    int p[8] = {3,-3,0,4,-2,1,2,-1};
    BubbleSort(p,8);
    cout << endl;
    return 0;
}
