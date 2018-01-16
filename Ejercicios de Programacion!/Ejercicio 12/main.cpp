#include <iostream>

using namespace std;

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

void SumaMatrices(int arr1[][100], int arr2[][100], int arrR[][100], int fil, int col)
{
    for(int i = 0; i < fil; i++)
    {
        for(int j = 0; j < col; j++)
        {
            arrR[i][j] = arr1[i][j] + arr2[i][j];
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

    int tam1 = fil1 * col1;
    int tam2 = fil2 * col2;

    if(tam1 == tam2)
    {
        //Primera Matriz
        cout << "\nPrimera Matriz...\n";
        LlenadorMatriz(mat1, fil1, col1);
        cout << endl;
        printMatriz(mat1, fil1, col1);
        //Segunda Matriz
        cout << "\nSegunda Matriz...\n";
        LlenadorMatriz(mat2, fil2, col2);
        cout << endl;
        printMatriz(mat2, fil2, col2);

        cout << "\nLa suma de las dos matrices es...\n";
        SumaMatrices(mat1,mat2,matR,fil1,col1);
        printMatriz(matR,fil1,col1);
    }
    else
    {
       cout << "\nERROR tamanhos incorrectos\n";
    }

  return 0;
}
