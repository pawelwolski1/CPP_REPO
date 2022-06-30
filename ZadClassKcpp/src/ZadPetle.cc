#include<iostream>
#include "ZadPetle.h"

using namespace std;

void Petla::funWhile(int numb ){
    cout<<"i++" << endl;
    int i = 0;
    while(i++ < numb){
        if(i == numb){
            cout<<"i is even to numb value. Break "<<endl;
            break;
        }
        cout<< i<<", ";
    }


    cout<<"++j" << endl;
    int j = 0;
    while(++j < numb){
        if(j == numb){
            cout<<"j is even to numb value. Break "<<endl;
            break;
        }
        cout<< j<<", ";
    }
    cout<<endl;
}

void Petla::funDoWhile(int numb){
    cout<<"i++"<<endl;
    int i = 0;
    do{
        if(i == 2){
            cout<< "'2 is here, continue now' ";
            continue;

        }

        cout<< i << " ";



    }
    while (i++ < numb);
    cout<<endl;

    cout<<"++j"<<endl;
    int j = 0;
    do{
        if(j == 2){
            cout<< "'2 is here, continue now' ";
            continue;

        }

        cout<< j << " ";



    }
    while (j++ < numb);
    cout<<endl;
}
void Petla::funFor(int numb){
    cout<<"for loop"<<endl;
    for(int i = 0; i <= numb;  i++){
        if(i == 3){
        cout << "i==3, return for loop  that's shorter" << endl;
			return funFor(numb - 2);
        }
        cout<<i <<" ";
    }


}

int Petla::main(){
    int numb = 5;
	funWhile(numb);
    funDoWhile(numb);
    funFor(numb);
    return 0;
}
