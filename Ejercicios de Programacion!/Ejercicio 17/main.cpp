#include <iostream>

using namespace std;

void PointerChange(int &a, int &b)
{
    int *aPtr = &a;
    int *bPtr = &b;
    int aux = *aPtr;
    *aPtr = b;
    *bPtr = aux;
}

int main()
{
    int x = 7, y = 6;
    cout << x << " " << y << endl;
    PointerChange(x, y);
    cout << x << " " << y << endl;
    return 0;
}
