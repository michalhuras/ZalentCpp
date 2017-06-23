#include <iostream>

using namespace std;
int liczba;
string imie;
int main()
{


    cout << "Podaj imiê" << endl;
    cin >>imie;
    cout << "Podaj liczbê ca³kowit¹" << endl;
    cin >>liczba;

    for (int i=1; i<=liczba; i++)
        {
        cout <<i<<"."<<imie<<endl;
    }
    return 0;
}
