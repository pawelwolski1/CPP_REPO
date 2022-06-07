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



class Codes{

public:

	Codes (){
	}

void kod_deklaracje_zmiennych(){
	printf("main()\n  {\n	printf(");red("\"Poczatek\\n\"");printf(");\n");blue("	int");
	printf(" temp = 3;\n");blue("	for ");printf("(");blue("int ");
	printf("i = 0; i < 10; i++)\n	{\n");green("		...");printf("\n	}\n  }");
}

void kod_domyslne_argumenty_funkcji(){
	blue("void");printf(" fun(");
	blue("int ");printf("a, ");blue("int ");printf("b = 2, ");blue("int");
	printf("c = 3)\n{\n");green(" ...\n");printf("}\n\nmain()\n  {\n	fun(1); ");
	green("/");green("/ fun(1,2,3)\n");printf("	fun(1,1); ");
	green("/");green("/ fun(1,1,3)\n");printf("	fun(1,1,1; )");
	green("/");green("/fun(1,1,1)\n");
}

void kod_przeciazanie_funkcji(){

	blue("void ");
	printf("fun(");blue("int ");printf("a) { ... }\n");
	printf("fun(");blue("int ");printf("a, ");
	blue("int "); printf("b = 0) { ... }\n\nmain()\n  {\n	fun(1);");
	green("/");green("/ ????? - błąd\n  ");printf("}");
}

void kod_referencje(){

	blue("int ");printf("a = 5;\n");blue("int ");printf("&b = a;");
	green(" /");green("/ b jest zmienna referencyjna do a\n");
	printf("b = 10;		");green("/");green("/ a == 10 && b == 10\n");
	printf("a = 20;		");green("/");green("/ a == 20 && b == 20\n\n\n");

}

void kod_referencje2(){

	blue("void ");printf("zamien(");blue("int");printf(" &a, ");
	blue("int ");printf("&b)\n  {\n");blue("	int ");
	printf("temp;\n 	temp = a;\n	a = b;\n	b = temp;\n  }\n\n");
	printf("main()\n  {\n	");blue("int ");printf("a = 1, b = 2\n	zamien(a,b);");
	green("/");green("/ a == 2 && b == 1");
	printf("\n  }");
}

void kod_dynamiczny_przydzial_pamieci(){

	blue("char");printf(" *str1, *str2;\nstr1 = ");blue("new char");
	printf(";\n*str1 = ");red("\'a\'");printf(";\nstr2 = "); blue("new char");
	printf("(");red("\'b\'");printf(";\n\n");blue("char ");
	printf("*str3 = ");blue("new char");printf("(");red("\'c\'");printf(");\n\n");blue("char ");
	printf("*str4;\nstr4 = ");blue("new char");printf("[11];\n\n");blue("if ");printf("(str4)\n{\n	strcpy(str4, ");red("\"1234567890\"");
	printf(");\n}");blue("\nelse");printf("\n{\n	cout << ");red("\"blad przydzialu pamieci\"");printf(" << endl;\n}\n\n");
	printf("cout << ");red("\"str1=\"");printf(" << *str1 << endl;");

}

void kod_dynamiczny_przydzial_pamieci2(){

	printf("Obiekty utworzone za pomocą newistnieją do momentu ich jawnego usunięcia operatorem delete\n•Obiekty takie nie maja nazwy; operowanie na nich tylko za pomocą wskaźników\n•Po utworzeniu zawierają \"śmieci\"\n");
	blue("delete ");printf("str1;\n");blue("delete ");printf("str2;");
	blue("delete ");printf("str3;\n\n\n");green("/");green("/ usuniecie dynamiczne tablicy\n"); blue("delete");printf("[] str4;\n");
}

void roznice(){


	green("/");green("/ PS. aby iść dalej wciskaj ENTER :)\n\n");
	press_enter();
	blue("C to strukturalny lub proceduralny język programowania.\n\n");
	red("C++ to język programowania obiektowego.\n");
	press_enter();
	blue("2. W C nacisk kładziony jest na procedurę lub kroki mające na celu rozwiązanie każdego problemu.\n"); 
	red("W C++ Nacisk kładziony jest na przedmioty, a nie na procedurę.\n");
	press_enter();
	blue("3. Funkcje są podstawowymi elementami budulcowymi.\n");
	red("Przedmioty to podstawowe elementy budulcowe.\n");
	press_enter();
	blue("4. W C dane nie są zabezpieczone.\n");
	red("Dane są ukryte i nie mają do nich dostępu funkcje zewnętrzne.\n");
	press_enter();
	blue("5. W C dane nie są zabezpieczone.\n");
	red("Dane są ukryte i nie mają do nich dostępu funkcje zewnętrzne.\n");
	press_enter();
	blue("6. C używa funkcji scanf() i printf() dla standardowego wejścia i wyjścia.\n");
	red("C++ używa cin>> i cout<< dla standardowego wejścia i wyjścia.\n");
	press_enter();
	blue("7. Zmienne muszą być zdefiniowane na początku funkcji. Nowoczesne kompilatory C, takie jak gcc, obsługują standardy C99 i C11, co pozwala na zadeklarowanie zmiennej w dowolnym miejscu.\n");
	red("Zmienne można definiować w dowolnym miejscu funkcji.\n");
	press_enter();
	blue("8. W C brak jest funkcji przestrzeni nazw.\n");
	red("W C++ obecna jest funkcja przestrzeni nazw.\n");
	press_enter();
	blue("9. C to język średniego poziomu.\n");
	red("C++ to język wysokiego poziomu.\n");
	press_enter();
	blue("10. Programy podzielone są na moduły i funkcje.\n");
	red("Programy podzielone są na klasy i funkcje.\n");
	press_enter();
	blue("11. C nie obsługuje bezpośrednio obsługi wyjątków. Można to zrobić za pomocą innych funkcji.\n");
	red("C++ obsługuje obsługę wyjątków. Zrobione za pomocą bloku try and catch.\n");
	press_enter();
	blue("12. Funkcje takie jak przeciążanie funkcji i przeciążanie operatora nie są  obecne.\n");
	red("C++ obsługuje przeciążanie funkcji i przeciążanie operatorów.\n");
	press_enter();
	blue("13. Plik programu C jest zapisywany z rozszerzeniem .C.\n");
	red("Plik programu C++ jest zapisany z rozszerzeniem .CPP.\n");

}
};

void which_menu();
void which_menu_roznice();
string which_menu_string;

bool flaga_exit = false;
bool flaga_main_menu = false;

Codes *kody = new Codes();


void which_menu(){
	if (which_menu_string == "menu_roznice"){
		menu_roznice();
	}
	if (which_menu_string == "menu_typy"){
		menu_typy();
	}
	which_menu_string = "";
	main_menu();
}


void menu_powrot_print(){
	cout << "\n\n\n1.Powrót\n2.Powrót do menu głównego\n3.Wyjście\n" <<endl;
}

int menu_powrot(){
	int k;
	menu_powrot_print();
	cin >> k;
	switch(k)
{
case 1:
	clear();
	which_menu();
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
	cout << "NIE WIEM CO ROBIĆ WRACAM DO MENU" << endl;
	flaga_main_menu = true;
	return 0;
}
}

void main_menu_print(){
	cout << "1.Różnice ogólne\n2.Typy zmiennych\n3.Deklaracje zmiennych\n4.Struktury i unie\n5.Domyślne argumenty funkcji\n6.Przeciążanie funkcji\n7.Referencje\n8.Dynamiczny przydział pamięci\n9.Strumienie wejście/wyjście\n10.Przestrzenie nazw\n11.C++ Standard Library\n12. WYJŚCIE\n13.INTRO\n" << endl;
}



int main_menu(){
	clear();
	yellow("Jesli jest to twoja pierwsza wizyta w tym programie polecam zapoznac sie z ogolnymi roznicami C/C++, zawartymi w INTRO pod nr 13, POWODZENIA\n");
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
	kody->kod_deklaracje_zmiennych();
	menu_powrot();
	return 3;
case 4:
	clear();
	odczyt("struktury_i_unie.txt");
	menu_powrot();
	return 4;
case 5:
	clear();
	kody->kod_domyslne_argumenty_funkcji();
	menu_powrot();
	return 5;

case 6:

	clear();
	odczyt("przeciazanie_funkcji.txt");
	kody->kod_przeciazanie_funkcji();
	menu_powrot();
	return 6;
case 7:
	clear();
	odczyt("Referencje.txt");
	kody->kod_referencje();
	odczyt("referencje2.txt");
	kody->kod_referencje2();
	menu_powrot();
	return 7;
case 8:
	clear();
	odczyt("dynamiczny_przydzial_pamieci.txt");
	kody->kod_dynamiczny_przydzial_pamieci();
	kody->kod_dynamiczny_przydzial_pamieci2();
	menu_powrot();
	return 8;
case 9:
	clear();
	odczyt("strumieniowe_wejscie_wyjscie.txt");
	menu_powrot();
	return 9;
case 10:
	clear();
	odczyt("przestrzenie_nazw.txt");
	menu_powrot();
	return 10;
case 11:
	clear();
	odczyt("C++_standard_library.txt");
	menu_powrot();
	return 11;
case 12:
	clear();
	flaga_exit = true;
	return 12;
case 13:
	clear();
	kody->roznice();
	menu_powrot();
	return 13;


default:
	clear();
	cout << "NIE WIEM CO ZROBIC! UCIEKAM!" << endl;
	usleep(10000);
	flaga_exit=true;
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
	clear();
	which_menu_string = "menu_typy";
	odczyt("typy_typ_znakowy.txt");
	menu_powrot();
	return 1;
case 2:
	clear();
	which_menu_string = "menu_typy";
	odczyt("typy_typ_wyliczeniowy.txt");
	menu_powrot();
default:
	cout << "NIE WIEM CO ROBIC WRACAM DO MENU!"<<endl;
	flaga_main_menu = true;
	return 0;
}
}
void menu_roznice_print(){
	cout <<"1.Słowa kluczowe\n2.Komentarze\n3.Wskaźniki typu void"<<endl;
	}

int menu_roznice(){
	clear();
	int k;
	menu_roznice_print();
	cin >> k;
	switch (k)
{
case 1:
	clear();
	which_menu_string = "menu_roznice";
	odczyt("roznice_ogolne_slowa_kluczowe.txt");
	menu_powrot();
	return 1;
case 2:
	clear();
	which_menu_string = "menu_roznice";
	odczyt("roznice_ogolne_komentarze.txt");
	menu_powrot();
	return 2;
case 3:
	clear();
	which_menu_string = "menu_roznice";
	odczyt("roznice_ogolne_wskazniki_typu_void.txt");
	menu_powrot();
	return 3;
default:
	flaga_main_menu = true;
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

int main(){
	int k;
	string temp;
	while (k != 0){
	main_menu();
	if (flaga_exit){
	break;
	}else if(flaga_main_menu){
	continue;
	}
	cin >> k;
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
