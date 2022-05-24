#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	string text;
	int num;
	cout << "Podaj liczbê: ";
	cin >> num;
	ofstream fileA("cin.txt");
	cerr << "Ended cin" << endl;
	if (fileA.good()){
		cout << "Writing to file" << endl;
		fileA << num;
		fileA.close();
	}
	else cerr << "Failed to write" << endl;
	ifstream fileB;
	fileB.open("cin.txt");
	if (fileB.is_open()){
		cout << "Reading from file" << endl;
		while(getline(fileB,text)){
			cout << text << endl;
		}
		fileB.close();
	}
	else clog << "Failed to read from file" << endl;
	cout << "\nEnd of function" << endl;
	return 0;
}
