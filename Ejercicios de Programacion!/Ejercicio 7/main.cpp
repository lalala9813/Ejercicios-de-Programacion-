#include <iostream>
#include<stdlib.h>
#include <time.h>

using namespace std;

void printArray(int arr[],int tamanio)
{
    for(int i = 0; i < tamanio; i++)
    {
        cout << arr[i] << " ";
    }
}

void printMatriz(int mat[][100], int fil, int col)
{
    for(int i = 0; i < fil; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}

void printEspiral(int mat[][100], int fil, int col)
{
    int tamanio = fil*col;
    int arreglo[tamanio];
    int aux = 0;
    int x = 0;
    for(int i = 0; i < fil; i++)//DERECHA
    {
        arreglo[aux] = mat[x][i];
        aux++;
    }
    cout << aux;
    //aux++;
    if(aux == fil)
    {
        x++;
        int index = fil - 1;
        for(int i = 0; i < col; i++)//ABAJO
        {
            arreglo[aux] = mat[x][index];
            aux++;
            x++;
        }
        int a = 2;
        for(int i = fil - 1; i == 0; i--)//ABAJO
        {
            arreglo[aux] = mat[3][2];
            aux++;
            a--;
        }

    }

    /*aux += 1;
    x++;*/
    /*for(int i = col; i >= 0; i--)//IZQUIERDA
    {
        arreglo[aux] = mat[x][i];
        aux++;
        x++;
    }
    aux += 1;
    x++;
    for(int i = col + 1; i >= 0; i--)//ARRIBA
    {
        arreglo[aux] = mat[x][i];
        aux++;
        x++;
    }*/
    cout << "\nEspiral\n";
    printArray(arreglo,fil + (col - 1)+ (fil - 1));
}

void CreateMatrix()
{
    int fil, col, elemento;
    cout << "Dame numero de filas -> ";
    cin >> fil;
    cout << "Dame numero de columnas -> ";
    cin >> col;

    srand(time(NULL));//generar un numero aleatorio
    elemento = 1 + rand()%(20);

    int matrix[fil][100];

    for(int i = 0; i < fil; i++)
    {
        for(int j = 0; j < col; j++)
        {
            matrix[i][j] = elemento;
            elemento += 1;
        }
    }
    printMatriz(matrix,fil,col);
    printEspiral(matrix,fil,col);
}

int main()
{
    //7.-MatrizEspiral
    CreateMatrix();
    return 0;
}
