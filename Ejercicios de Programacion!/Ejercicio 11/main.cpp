#include <iostream>

using namespace std;

void printArray(int arr[],int tamanio)
{
    for(int i = 0; i < tamanio; i++)
    {
        cout << arr[i] << " ";
    }
}

void MergeSort(int arr[], int tamanio)
{
    int result[tamanio];
    int t1, t2;
    if(tamanio % 2 == 0)
    {
        t1 = tamanio/2;
        t2 = tamanio/2;
    }
    else
    {
        t1 = tamanio/2 + 1;
        t2 = tamanio/2;
    }

    int sarr1[t1];
    int sarr2[t2];

    for(int i = 0; i < t1; i++)
    {
        sarr1[i] = arr[i];
    }
    printArray(sarr1,t1);

    int index = 0;
    for(int i = t1; i < tamanio; i++)
    {
        sarr2[index] = arr[i];
        index++;
    }
    cout << "\n";
    printArray(sarr2,t2);

    cout << "\n\nOrdenando la primera parte\n";
    int pos1, aux1, pos2, aux2;

    for(int i = 0; i < t1; i++)
    {
        pos1 = i;
        aux1 = sarr1[i];
        while((pos1 > 0) && (sarr1[pos1 - 1] > aux1))
        {
            sarr1[pos1] = sarr1[pos1 - 1];
            pos1--;
        }
        sarr1[pos1] = aux1;
    }
    printArray(sarr1,t1);

    cout << "\n\nOrdenando la segunda parte\n";

    for(int i = 0; i < t2; i++)
    {
        pos2 = i;
        aux2 = sarr2[i];
        while((pos2 > 0) && (sarr2[pos2 - 1] > aux2))
        {
            sarr2[pos2] = sarr2[pos2 - 1];
            pos2--;
        }
        sarr2[pos2] = aux2;
    }
    printArray(sarr2,t2);

    for(int i = 0; i < t1; i++)
    {
        result[i] = sarr1[i];
    }
    cout << "\n\nResultParcial1\n";
    printArray(result,t1);

    int index2 = 0;
    for(int i = t1; i < tamanio; i++)
    {
        result[i] = sarr2[index2];
        index2++;
    }
    cout << "\n\nResultParcial2\n";
    printArray(result,tamanio);

    int pos3, aux3;

    for(int i = 0; i < tamanio; i++)
    {
        pos3 = i;
        aux3 = result[i];
        while((pos3 > 0) && (result[pos3 - 1] > aux3))
        {
            result[pos3] = result[pos3 - 1];
            pos3--;
        }
        result[pos3] = aux3;
    }
    cout << "\n\nResultado Final\n";
    printArray(result,tamanio);
}

int main()
{
    int arr[] = {5,3,2,4,1,0};
    cout << "Ordenando por MergeSort..." << endl;
    MergeSort(arr,6);
    return 0;
}
