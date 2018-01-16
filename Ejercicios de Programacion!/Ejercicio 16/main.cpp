#include <iostream>

using namespace std;

void ReferenceChange(int &a, int &b)
{
    int aux = a;
    a = b;
    b = aux;
}

int main()
{
    int x = 7, y = 6;
    cout << "x -> " << x << " | y -> " << y << endl;
    ReferenceChange(x,y);
    cout << "x -> " << x << " | y -> " << y << endl;
    return 0;
}
