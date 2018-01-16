#include <iostream>
#include <stdlib.h>//Libreria para poder usar el new y delete

using namespace std;

int **matrizA,**matrizB,**matrizC,nFilasA,nColA,nFilasB,nColB,**pm=matrizC,p=0;//Mis variables globales

void inicializar()//Funcion que inicializa mis matrices
{
    //************************************************************************************
    matrizA = new int*[nFilasA];
    for(int i=0;i<nFilasA;i++)
    {
        matrizA[i]=new int[nColA];
    }
    //************************************************************************************
    matrizB = new int*[nFilasB];
    for(int i=0;i<nFilasB;i++)
    {
        matrizB[i]=new int[nColB];
    }
    //************************************************************************************
    matrizC = new int*[nColA];
    for(int i=0;i<nColA;i++)
    {
        matrizC[i] = new int[nFilasB];
    }
    //************************************************************************************
}
void pedir()//Funcion que pide los datos al usuario como las dimensiones de las matrices y los elementos de estas
{
    cout << "Datos de tu primera matriz\n\n";
    //************************************************************************************
    cout << "Dame el numero de FilasA -> ";
    cin >> nFilasA;
    cout << "Dame el numero de ColumnasA -> ";
    cin >> nColA;
    //************************************************************************************
    cout << "\nDatos de tu segunda matriz\n\n";
    //************************************************************************************
    cout << "Dame el numero de FilasB -> ";
    cin >> nFilasB;
    cout << "Dame el numero de columnasB -> ";
    cin >> nColB;
    inicializar();
    cout << "\n";
    //************************************************************************************
    for(int i=0;i<nFilasA;i++)//Le pide los elementos a la matriz
    {
        for(int j=0;j<nColA;j++)
        {
            cout << "Dame mis numeros["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matrizA+i)+j);

        }
    }
    cout << "\n";
    //************************************************************************************

    for(int i=0;i<nFilasB;i++)//Le pide los elementos a la matriz
    {
        for(int j=0;j<nColB;j++)
        {
            cout << "Dame mis numeros["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matrizB+i)+j);

        }
    }
}

void imprimir(int **matrizA,int nFilasA,int nColA,int **matrizB,int nFilasB,int nColB,int **matrizC)/*Funcion que imprime mis matrices
como la A, la B y la C(La C es mi matriz resultante)*/
{
    //************************************************************************************
    cout << "\nTu primera Matriz\n";
    for(int i=0;i<nFilasA;i++)
    {
        for(int j=0;j<nColA;j++)
        {
            cout << *(*(matrizA+i)+j)<<" ";
        }
        cout << "\n";
    }
    cout << "\n";
    //************************************************************************************
    cout << "\nTu segunda Matriz\n";
    for(int i=0;i<nFilasB;i++)
    {
        for(int j=0;j<nColB;j++)
        {
            cout << *(*(matrizB+i)+j)<<" ";
        }
        cout << "\n";
    }
    //************************************************************************************
    int tam1 = nFilasA * nColA;
    int tam2 = nFilasB * nColB;
    if(tam1 == tam2)//verificacion si es que podemos multiplicar las matrices
    {
        cout << "\nTu Suma de las Matrices\n";
        for(int i=0;i<nFilasA;i++)
        {
            for(int j=0;j<nColB;j++)
            {
                cout << *(*(matrizC+i)+j)<<" ";
            }
            cout << "\n";
        }
    }
    else
    {
        cout << "\n" << "********************MENSAJITO*******************";
        cout << "\n" << "ERROR no podemos sumar esta matrices \n";
    }

}

void multi(int **matrizA,int **matrizB,int **matrizC,int nFilasA, int nColA)//Funcion que multiplica mis Matrices
{

    for(int i=0;i<nFilasA;i++)
    {
        for(int j=0;j<nColA;j++)
        {
            *(*(matrizC+i)+j) = (*(*(matrizA+i)+j)) + (*(*(matrizB+i)+j));
        }
    }
}

void printArray(int *arr,int tamanio)
{
    for(int i = 0; i < tamanio; i++)
    {
        cout << *(arr + i) << " ";
    }
}

void QuickSort(int *arr, int inicio, int final, int tamanio)
{
    int i = inicio, f = final, aux, ft;
    ft = (inicio + final) / 2;
    int pivot = *(arr + ft);

    do
    {
        while(*(arr + i) < pivot && f <= final)
        {
            i++;
        }
        while(pivot < *(arr + f) && f > inicio)
        {
            f--;
        }
        if(i <= f)
        {
            aux = *(arr + i);
            *(arr + i) = *(arr + f);
            *(arr + f) = aux;
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
    cout << "\n\n";
    //LLAMANDO A MIS FUNCIONES
    pedir();
    multi(matrizA,matrizB,matrizC,nFilasA,nColA);
    imprimir(matrizA,nFilasA,nColA,matrizB,nFilasB,nColB,matrizC);

    //BORRANDO EL ESPACIO ALMACENADO
    for(int i=0;i<nFilasA;i++)
    {
        delete[] matrizA[i];
    }
    delete[] matrizA;

    for(int i=0;i<nFilasB;i++)
    {
        delete[] matrizB[i];
    }
    delete[] matrizB;
    for(int i=0;i<nFilasA;i++)
    {
        delete[] matrizC[i];
    }
    delete[] matrizC;
    return 0;
}
