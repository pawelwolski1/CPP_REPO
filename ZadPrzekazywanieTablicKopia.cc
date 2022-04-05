#include <iostream>

using namespace std;



int main(){
	int x;
	cin >> x;
	int A[x] = {0};
	for (int i=1; i<x; i++){ 
	A[i] = ++A[x-1];
	A[x-1]++;
	cout << A[i] << endl;
	}
	return 0;
}

