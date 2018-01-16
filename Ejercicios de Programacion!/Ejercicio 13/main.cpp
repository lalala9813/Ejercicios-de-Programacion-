#include <iostream>

using namespace std;

void printMatriz(int mat[][100], int fil1, int col2)
{
    for(int i = 0; i < fil1; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}

void LlenadorMatriz(int mat[][100], int fil, int col)
{
    for(int i = 0; i < fil; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << "Dame elemento para la posicion [" << i << "][" << j << "] -> ";
            cin >> mat[i][j];
        }
    }
}

void MulMatrices(int arr1[][100], int arr2[][100], int arrR[][100], int fil1, int col1, int fil2, int col2)
{
    for(int i = 0; i < fil1; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            arrR[i][j] = 0;
            for(int k = 0; k < col1; k++)
            arrR[i][j] += arr1[i][k] * arr2[k][j];
        }
    }
}

int main()
{
    int fil1, col1, fil2, col2;
    int mat1[100][100];
    int mat2[100][100];
    int matR[100][100];
    cout << "Dame filas de la primera matriz -> ";
    cin >> fil1;
    cout << "Dame columnas de la primera matriz -> ";
    cin >> col1;

    cout << "Dame filas de la segunda matriz -> ";
    cin >> fil2;
    cout << "Dame columnas de la segunda matriz -> ";
    cin >> col2;

    if(col1 == fil2)
    {
        //Primera Matriz
        cout << "\nPrimera Matriz...\n";
        LlenadorMatriz(mat1, fil1, col1);
        //Segunda Matriz
        cout << "\nSegunda Matriz...\n";
        LlenadorMatriz(mat2, fil2, col2);

        cout << "\nLa multiplicacion de las dos matrices es...\n";
        MulMatrices(mat1,mat2,matR,fil1,col1,fil2,col2);
        printMatriz(matR,fil1,col2);
    }
    else
    {
       cout << "\nERROR tamanhos incorrectos\n";
    }

  return 0;
}
