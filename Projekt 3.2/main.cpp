#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{
     for (int i=15; i>=0; i--)
        {
        Sleep(1000);
        system("cls");
        cout << i<< endl;

        }
    Sleep(1000);
    cout << "JEBUT" << endl;
    return 0;
}
