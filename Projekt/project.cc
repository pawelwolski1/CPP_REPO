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
int main_menu();
void kod_deklaracje_zmiennych();
void kod_domyslne_argumenty_funkcji();
void kod_przeciazanie_funkcji();

bool flaga_exit = false;
bool flaga_main_menu = false;

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
	clear();
	return 1;
case 2:
	clear();
	flaga_main_menu = true;
	return 2;
case 3:
	clear();
	flaga_exit = true;
	return 3;
default:
	return 0;
}
}

void main_menu_print(){
	cout << "1.Różnice ogólne\n2.Typy zmiennych\n3.Deklaracje zmiennych\n4.Struktury i unie\n5.Domyślne argumenty funkcji\n6.Przeciążanie funkcji\n6.Referencje\n7.Dynamiczny przydział pamięci\n8.Strumienie wejście/wyjście\n9.Przestrzenie nazw\n10.C++ Standard Library\n11. WYJŚCIE" << endl;
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
	clear();
	odczyt("deklaracje_zmiennych.txt");
	kod_deklaracje_zmiennych();
	return 3;
case 4:
	clear();
	odczyt("struktury_i_unie.txt");
	return 4;
case 5:
	clear();
	kod_domyslne_argumenty_funkcji();
	return 5;

case 6:

	clear();
	odczyt("przeciazanie_funkcji.txt");
	kod_przeciazanie_funkcji();
	return 6;
case 7:
	clear();
	odczyt("Referencje.txt");

	odczyt("referencje2.txt");
	return 7;
case 8:
	clear();
	odczyt("dynamiczny_przydzial_pamieci.txt");
	return 8;
case 9:
	clear();
	odczyt("strumieniowe_wejscie_wyjscie.txt");
	return 9;
case 10:
	clear();
	odczyt("przestrzenie_nazw.txt");
	return 10;
case 11:
	clear();
	odczyt("C++_standard_library.txt");
	return 11;
case 12:
	flaga_exit = true;
	return 12;



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
	printf(");\n");
	blue("	int");
	printf(" temp = 3;\n");
	blue("	for ");
	printf("(");
	blue("int ");
	printf("i = 0; i < 10; i++)\n	{\n");
	green("		...");
	printf("\n	}\n  }");
}

void kod_domyslne_argumenty_funkcji(){
	blue("void");
	printf(" fun(");
	blue("int ");
	printf("a, ");
	blue("int ");
	printf("b = 2, ");
	blue("int");
	printf("c = 3)\n{\n");
	green(" ...\n");
	printf("}\n\nmain()\n  {\n	fun(1); ");
	green("/");
	green("/ fun(1,2,3)\n");
	printf("	fun(1,1); ");
	green("/");
	green("/ fun(1,1,3)\n");
	printf("	fun(1,1,1; )");
	green("/");
	green("/fun(1,1,1)\n");
}

void kod_przeciazanie_funkcji(){

	blue("void ");
	printf("fun(");blue("int ");printf("a) { ... }\n");
	printf("fun(");blue("int ");printf("a, ");
	blue("int "); printf("b = 0) { ... }\n\nmain()\n  {\n	fun(1);");
	green("/");green("/ ????? - błąd\n  ");printf("}");
}

int main(){
	int k;
	string temp;
	cout << "To jest program do nauki różnic w C i C++\n" <<endl;
	while (k != 0){
	main_menu();
	if (flaga_exit){
	break;
	}
	cout << "\n\n\n";
	menu_powrot();
	if (flaga_exit){
	break;
	}else if(flaga_main_menu){
	continue;
	}
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
	cout << "\n";

return 0;
}
