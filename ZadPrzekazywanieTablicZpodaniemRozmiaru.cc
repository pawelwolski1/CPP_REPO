#include <iostream>
#include <iterator>
using namespace std;

void przekaz1Drozmiar(int tab[], int rozmiar){
	for (int i = 0; i < rozmiar; i++){
	cout << i << "\t" << tab[i] << endl;
	}
}

int main() {

	int tablica1D[6] = {1,2,3,4,5,6};
	for (int i = 0; i < 6; i++){
		cout << i << "\t" << tablica1D[i] << endl;
	}
	przekaz1Drozmiar(tablica1D, 6);
	return 0;	
}
