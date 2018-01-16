#include <iostream>

using namespace std;

int strlen(char *c)
{
    char *n = c;
    for(; *c != '\0'; c++);

    return c - n;
}

int main()
{
    char a[] = "Renzo";
    cout << "El tamanio de mi caracter es -> " << strlen(a) << endl;
    return 0;
}
