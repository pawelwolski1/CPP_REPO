#include <iostream>


void petleWhile() {
    int i = 0;
    while (i < 10) {
        std::cout << i++ << std::endl;
    }
}

void petleDoWhile() {
    int i = 0;
    do {
        std::cout << i++ << std::endl;
    }
    while(i < 10);
}

void petleFor() {
    for(int i = 0; i < 10; i++) {
        std::cout << i << std::endl;
    }
}
int main() {
  petleFor();
  std::cout <<std::endl;
  petleWhile();
  std::cout <<std::endl;
  petleDoWhile();
  std::cout <<std::endl;
  return 0;
}
