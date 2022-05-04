#include<iostream>
#include<string.h>
using namespace std;

class Moja
{
	public:
		string nazwa;
		Moja& set_wiek(int x);
		int get_wiek();
		void pokaz();
		Moja& set_imie(string x);
		string get_imie();
		~Moja();
	private:
		int wiek;
		string imie;
		int y;

};


Moja& Moja::set_imie(string x){
	imie = x;
	return *this;
}
string Moja::get_imie(){
	return imie;
}

Moja& Moja::set_wiek(int x){
	wiek = x;
	return *this;
}

int Moja::get_wiek(){
	return wiek;
}

void Moja::pokaz(){
	cout<<imie<<": "<<wiek<<",adres: "<<&y<<endl;
}

Moja::~Moja(){
cout<<"Osoba mdleje"<<endl;
}


bool Rowne(Moja a, Moja b){
	if (a.get_imie() == b.get_imie()){
		cout<<"WOW TAKIE SAME IMIONA"<<endl;
		return true;
	}else{
		cout<<"TO INNE OSOBY"<<endl;
		return false;
}
}
int main(){

	Moja* ale=new Moja();
	Moja ala, bartek;
	ala.set_wiek(19);
	ala.get_wiek();
	ala.set_imie("Ala");
	ala.pokaz();
	bartek.set_wiek(20);
	bartek.set_imie("Bartek");
	Rowne(ala,bartek);
	delete ale;
return 0;
}
