#include <iostream>

using namespace std;

void Repetidos(int arr[], int tamanio)
{
	int cont[tamanio];
	for(int i = 0; i < tamanio; i++)
    {
		cont[i] = 0;
	}
	for(int i = 0; i < tamanio; i++)
	{
		int aux = arr[i];
		for(int j = 0; j < tamanio; j++)
		{
			if(arr[j] == aux)
			{
				cont[i]++;
			}
		}
	}
	for(int i = 0; i < tamanio; i++)
	{
		cout << "El elemento " << arr[i] << " se repite -> "<< cont[i] << " veces" << endl;
	}
}

int main()
{
    int arr[6] = {1,2,0,1,0,4};
    Repetidos(arr,6);
    return 0;
}
