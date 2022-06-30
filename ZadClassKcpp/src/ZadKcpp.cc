#include <iostream>
#include "ZadKcpp.h"



void functions::zad1(){
    Parzysta *zad1 = new Parzysta;
    delete zad1;
}
void functions::zad2(){
    Petla *zad2 = new Petla;
    delete zad2;
}
void functions::zad3(){
    Przekazywanie *zad3= new Przekazywanie;
    delete zad3;
}
void functions::zad4(){
    Przekazywanie_rozmiar *zad4 = new Przekazywanie_rozmiar;
    delete zad4;
}

int functions::run() {
        int choice;
        do {
            std::cout << std::endl << "MENU" << std::endl << std::endl;
            std::cout <<"1) Parzysta" <<
                std::endl <<"2) Petla" <<
                std::endl << "3) Przekazywanie Tablic, kopia" <<
                std::endl << "4) Przekazywanie Tablic z podaniem rozmiaru" <<
                std::endl << "5) Wyjdz"
                << std::endl << std::endl;

            std::cin >> choice;
            switch(choice) {
                case 1:
                    functions::zad1();
                    break;
                case 2:
                    functions::zad2();
                    break;
                case 3:
                    functions::zad3();
                    break;
                case 4:
                    functions::zad4();
                    break;
                case 5:
                    break;
                default:
                    std::cout << " Nie ma takiej opcji w MENU";
                    break;
            }
        }
        while(choice != 5);
        return 0;
    }
