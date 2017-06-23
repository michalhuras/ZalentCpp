#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
using namespace std;
int liczba;
int main()
{

    cout << "Witaj! za 3 sekundy nast¹pi zwolnienie blokady " << endl;
    cout << "3"<< endl;
    Sleep(1000);
    cout << "2"<< endl;
    Sleep(1000);
    cout << "1"<< endl;
    Sleep(1000);

    cout<< "Wylosowane liczby:"<< endl;

    srand(time(NULL));
    liczba = rand()%45+1;
    cout <<liczba<<endl;
      liczba = rand()%45+1;
    cout <<liczba<<endl;
      liczba = rand()%45+1;
    cout <<liczba<<endl;
      liczba = rand()%45+1;
    cout <<liczba<<endl;
      liczba = rand()%45+1;
    cout <<liczba<<endl;
      liczba = rand()%45+1;
    cout <<liczba<<endl;


    system("pause");
    return 0;
}
