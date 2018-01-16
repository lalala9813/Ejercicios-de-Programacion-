#include <iostream>

using namespace std;

void Cuadrado(int n){
	int index = n-2;
	for(int i = 0; i < n;i++){
		cout << "* ";
	}
	cout << endl;
	for(int i = 0; i < index;i++){
		cout << "* ";
		for(int j = 0; j < index; j++){
			cout << "  ";
		}
		cout << "* " <<endl;
	}
	for(int i = 0; i < n;i++){
		cout << "* ";
	}
	cout << endl;
}

int main()
{
    Cuadrado(7);
    return 0;
}
