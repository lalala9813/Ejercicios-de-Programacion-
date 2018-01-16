#include <iostream>

using namespace std;

int strlen(char *c)
{
    char *n = c;
    for(; *c != '\0'; c++);
    int rpta = c - n;
    return rpta;
}

void Palindrome(char *a, int tamanio)
{
    bool r = true;
    int tam1 = tamanio / 2;;

    for(int i = 0; i < tam1; i++)
    {
        if(a[i] != a[tamanio - 1])
        {
            r = false;
        }
        tamanio--;
    }
    if(r == true)
    {
        cout << "Es palindorme\n";
    }
    else
    {
        cout << "No es Palindrome\n";
    }
}

void PalindromeConDosCadenas(char *a, int tamanio1, char *b, int tamanio2)
{
    bool r = true;

    for(int i = 0; i < tamanio1; i++)
    {
        for(int j = tamanio2 - 1; j >= 0; j--)
        {
            if(a[i] != b[j])
            {
                r = false;
            }
        }
    }
    if(r == true)
    {
        cout << "Es palindorme\n";
    }
    else
    {
        cout << "No es Palindrome\n";
    }
}

int main()
{
    char a[] = "esternocleidomastoideooediotsamodielconretse";
    int rpta = strlen(a);
    Palindrome(a,rpta);
    return 0;
}
