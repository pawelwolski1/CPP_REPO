#include <iostream>
using namespace std;


union UnionA {
    int x;
    float y;
};

int main() {
    _Union d;
    // Przypisanie do x
    d.x = 1;
    cout << "x: " << d.x << endl;
    // Odczyt blednej wartosci w przypadku y
    cout << "y: " << d.y << endl;
    // Przypisanie do y
    d.y = 2.2;
    cout << "y: " << d.y << endl;
    // Odczyt blednej wartosci w przypadku x
    cout << "x: " << d.x << endl;
    return 0;
}
