#include <iostream>

using namespace std;
int liczba;
string imie;
int main()
{


    cout << "Podaj imi�" << endl;
    cin >>imie;
    cout << "Podaj liczb� ca�kowit�" << endl;
    cin >>liczba;

    for (int i=1; i<=liczba; i++)
        {
        cout <<i<<"."<<imie<<endl;
    }
    return 0;
}
