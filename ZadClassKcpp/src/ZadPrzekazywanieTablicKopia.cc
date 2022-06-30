#include <iostream>
#include "ZadPrzekazywanieTablicKopia.h"

using namespace std;
int lenght = 3;
void Przekazywanie::func(int tab[])
{
        for(int i=0; i<lenght; i++)
                cout << &tab[i] << endl;
}
int Przekazywanie::main()
{
        int table[] = {0, -2, 4};
        for(int i=0;i<lenght;i++)
                cout<<table[i]<<endl;
        cout<<endl;
        func(table);
        return 0;
}
