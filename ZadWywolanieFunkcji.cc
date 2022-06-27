#include <iostream>
using namespace std;

void funA() {
    cout << "Wywolano funA()" << endl;
}

void funB() {
    cout << "Wywolano funB()" << endl;
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        char choice;
        cout << "Wybierz funkcje do wywolania: " << endl;
        cout << "1 - funA()" << endl;
        cout << "2 - funB()" << endl;
        cin >> choice;
        switch (choice) {
            case '1':
                funA();
                break;
            case '2':
                funB();
                break;
            default:
                cout << "Brak takiej opcji" << endl;
                break;
        }
    } else if (argc == 2) {
        if (argv[1] == string("funA")) {
            funA();
        } else if (argv[1] == string("funB")) {
            funB();
        } else {
            cout << "Brak takiej opcji" << endl;
        }
    } else {
        cout << "Podano niewlasciwa liczbe argumentow" << endl;
    }
    return 0;
    
}
