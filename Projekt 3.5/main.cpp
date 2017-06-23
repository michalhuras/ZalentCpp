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

    do
        {
            i=i+1;
            liczbab=liczbab*2;

    }
    while(liczbab<=100000);
    cout <<"Po"<< i<< "godzinach liczba bakterii przekroczy 100000"<<endl;
    return 0;
}
