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
		if (program == "fun1")
			fun1();
		else if (program == "fun2")
			fun2();
		else if (program == "fun3")
			fun3();
		else if (program == "fun4")
			fun4();
		else if (program == "fun5")
			fun5();
			
	return 0;	
}
