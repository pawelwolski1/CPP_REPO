#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;



int main(){
	int wynik;
	float a = 30.123456;
	wynik = a /10;
	cout <<"=====================================================\t"<<endl;
	cout <<"Wynik naszego dizalania jest niepoprawny, ale:"<<endl;
	cout <<"\toutput1:    " << setprecision (5) << a <<"    T:     "<<setprecision(4)<<a/10<<endl;
	cout <<"\toutput2:     "<< setw(2)<< a-23 << "    T:  "<<setw(7)<<setprecision(7)<< a + 66<< endl;
	cout <<"\toutput3:     "<< setw(4)<< setprecision(4)<< a-22<<"    T:  "<<setw(7)<<setprecision(8)<<a+30<<endl;
	cout <<"\t--------------------------------------"<<endl;
	cout <<"\taverage:   "<< setprecision(4)<<setw(6)<<(a + a-23 + a - 22)/3<<"     T:  "<<setprecision(8)<<(a/10 + a + 66 + a + 30)/3<< endl;

	cout <<"=====================================================\t"<<endl;

	return 0;
}
