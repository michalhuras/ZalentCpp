#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int liczba;
int zagadka;
int prob;

int main()
{
    prob=0;
    cout << "Witaj! Pomy�la�em sobie liczbe z zakresu 1 do 100. Zgadnij t� liczb�" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;
    cout <<liczba<<endl;
    while(zagadka!=liczba)
    {
    cout << "podaj liczb�" <<endl;
    cin>>zagadka;
    prob++;
    if (zagadka>liczba) {cout <<"Za du�o";}
    if (zagadka==liczba) {cout <<"gratulacje to ta liczba"<<endl;}
    else if (zagadka<liczba) cout << "Za ma�o ";
    }
    cout <<"Liczba prob wynosila"<< prob<<endl;

    system("pause");
    return 0;
}
