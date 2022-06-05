#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <unistd.h>
#include <limits>

#include "colors.h"

using namespace std;

void press_enter();
void clear();
void odczyt(string sciezka);
int menu_roznice();
int menu_typy();
void kod_deklaracje_zmiennych();


void menu_powrot_print(){
	cout << "1.Powrót\n2.Powrót do menu głównego\n3.Wyjście\n" <<endl;
}

int menu_powrot(){
	int k;
	menu_powrot_print();
	cin >> k;
	switch(k)
{
case 1:
	return 1;
case 2:
	return 2;
case 3:
	return 3;
default:
	return 0;
}
}

void main_menu_print(){
	cout << "1.Różnice ogólne\n2.Typy zmiennych\n3.Deklaracje zmiennych\n" << endl;
}

int main_menu(){
	int k;
	main_menu_print();
	cin >> k;
	switch (k)
{
case 1:
	clear();
	menu_roznice();
	return 1;
case 2:
	clear();
	menu_typy();
	return 2;
case 3:
	odczyt("deklaracje_zmiennych.txt");
	kod_deklaracje_zmiennych();
	return 3;
default:
	cout << "NIE WIEM CO ZROBIC!" << endl;
	return 0;}
}

void menu_typy_print(){
	cout <<"1.Typ znakowy\n2.Typ wyliczeniowy" <<endl;
}


int menu_typy(){
	int k;
	menu_typy_print();
	cin >> k;
	switch (k)
{
case 1:
	odczyt("typy_typ_znakowy.txt");
	return 1;
case 2:
	odczyt("typy_typ_wyliczeniowy.txt");
default:
	return 0;
}
}
void menu_roznice_print(){
	cout <<"1.Słowa kluczowe\n2.Komentarze\n3.Wskaźniki typu void"<<endl;
	}

int menu_roznice(){
	int k;
	menu_roznice_print();
	cin >> k;
	switch (k)
{
case 1:
	odczyt("roznice_ogolne_slowa_kluczowe.txt");
	return 1;
case 2:
	odczyt("roznice_ogolne_komentarze.txt");
	return 2;
case 3:
	odczyt("roznice_ogolne_wskazniki_typu_void.txt");
	return 3;
default:
	return 0;}
}
void odczyt(string sciezka){
	ifstream odczyt(sciezka);
	char z;
	while (!odczyt.eof()){
		odczyt.get(z);
		usleep(2000);
		cout << z << flush;
	}
	odczyt.close();
}

void press_enter(){
	string temp;
	cin.ignore();
	getline(cin,temp);
}

void clear() {
    cout << "\x1B[2J\x1B[H";
}

void kod_deklaracje_zmiennych(){
	printf("main()\n  {\n	printf(");
	red("\"Poczatek\\n\"");
	printf(");");
}
int main(){
	int k;
	yellow("ala ma kota");
	string temp;
	cout << "To jest program do nauki różnic w C i C++\n" <<endl;
	while (k != 0){
	main_menu();
	cout << "\n\n\n";
	menu_powrot();
	cin >> k;

//	cin.get();
//	cout<< u8"\033[2J\033[1;1H";
	}
	string goodbye;
	goodbye = "Dziękuję za uwagę, DOBRANOC!";
	int i = 0;
	char z;
	while(i < 20){
		usleep(20000);
		cout << goodbye[i] << flush;
		i++;
	}

return 0;
}
