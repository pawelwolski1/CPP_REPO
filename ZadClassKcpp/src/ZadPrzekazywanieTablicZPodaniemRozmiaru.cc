#include <iostream>
#include "ZadPrzekazywanieTablicZPodaniemRozmiaru.h"

using namespace std;

int Przekazywanie_rozmiar::print(int n, int A[]){
	cout << "Przekazano tablicę o wielkości: " << n << endl;
	for (int i=0; i<n; i++) cout << A[i] << " ";
	cout << endl;
	return 0;
}


int Przekazywanie_rozmiar::main(){
	int n;
	cout << "Podaj wielkość tablicy: ";
	cin >> n;
	if (n<1 || n>255){
		cout << "Wielkość tablicy poza zakresem." << endl;
		return 1;
	}
	int A[n] = {0};
	for (int i=1; i<n; i++) A[i] = ++A[i-1];
	A[n-1]++;
	print(n, A);
	return 0;
}
