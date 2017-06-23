#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;
int liczbab;
int i;
int main()
{
liczbab=1;
i=0;

    while(liczbab<=100000)
        {
            i=i+1;
            liczbab=liczbab*2;

    }
    cout <<"Po"<< i<< "godzinach liczba bakterii przekroczy 100000"<<endl;
    return 0;
}
