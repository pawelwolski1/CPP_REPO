#include <iostream>

using namespace std;


void fun1() {
	cout << "FUN1" << endl;
}

void fun2() {
	cout << "FUN2" << endl;
}

void fun3() {
	cout << "FUN3" << endl;
}

void fun4() {
	cout << "FUN4" << endl;
}

void fun5() {
	cout << "FUN5" << endl;
}

int main(int argc, char *argv[]) {

	for (int i = 1; i < argc; i++) {
		if (argv[i] == "fun1"){
			fun1();
			}
		else if (argv[i] == "fun2"){
			fun2();
			}
		else if (argv[i] == "fun3"){
			fun3();
			}
		else if (argv[i] == "fun4"){
			fun4();
			}
		else if (argv[i] == "fun5"){
			fun5();
			}
			}
			
	return 0;	
}
