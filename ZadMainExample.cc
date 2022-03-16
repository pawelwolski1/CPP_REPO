#include <iostream>
using namespace std;

void funkcja1(){
        cout<<"CZESC JESTEM FUNKCJA NUMER 1"<<endl;
}
int funkcja2(){
        int a;
        int b;
        if(a<b) cout<<"a > b"<<endl;
        return 0;
}
int funkcja3(int a){
        return 0;
}

int main(int argc, char *argv[]){

        for (int i = 0; i < argc; i++) {
                if(argv[i] == "f"){
                        funkcja1();
                        }
                cout << argv[i] << endl;
        }

        return 0;     
}


