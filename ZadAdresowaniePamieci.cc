#include <iostream>

using namespace std;

int main(){
	int a = 13;
	int b = 21;
	int c = 39;
	cout << "Adres a: " << &a << ", warto�� a: " << a << endl;
	cout << "Adres b: " << &b << ", warto�� b: " << b << endl;
	cout << "Adres c: " << &c << ", warto�� c: " << c << endl;
	// Zmienne maj� adresy, r�ni�ce si� o rozmiar typu zmiennych.
	return 0;
}
