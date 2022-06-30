#include <iostream>
#include "ZadParzyste.h"

using namespace std;

void Parzysta::funA(int num){
	if (num & 1 == 1) cout << "Liczba nieparzysta" << endl;
	else cout << "Liczba parzysta" << endl;
}

void Parzysta::funB(int num){
	if (num % 2 != 0) cout << "Liczba nieparzysta" << endl;
	else cout << "Liczba parzysta" << endl;
}

void Parzysta::funC(int num){
	num % 2 != 0  ? cout << "Liczba nieparzysta" << endl : cout << "Liczba parzysta" << endl;
}

int Parzysta::main(){
	int num;
	cout << "Podaj liczbę całkowitą:" << endl;
	cin >> num;
	cout <<funA(num)<<endl;
	funB(num);
	funC(num);
	return 0;
}
