#include <iostream>

using namespace std;

void Change(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main()
{
    int x, y;
    cout << "Dame x -> ";
    cin >> x;
    cout << "Dame y -> ";
    cin >> y;
    cout << "x -> " << x << " | y -> " << y << endl;
    Change(x, y);
    cout << "x -> " << x << " | y -> " << y << endl;
    return 0;
}
