#include <iostream>

using namespace std;


int fun1(int a){
	return a;
}

int fun2(int& a){
	return a;
}

int fun3(int *a){
	return *a;
}


int* fun4(int B[]){
	return B;
}


int main(){
	int B[5] = {1,2,3,4,5};
	int n = 5;
	int *wsk = &n;
	cout << fun1(n) << endl;
	cout << fun2(n) << endl;
	cout << fun3(wsk) << endl;
	cout << fun4(B) << endl;
	return 0;
}
