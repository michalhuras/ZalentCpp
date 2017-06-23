#include <iostream>

using namespace std;
string login, haslo;

int main()
{
    cout << "Podaj login " << endl;
    cin >>login;
    cout << "Podaj haslo " << endl;
    cin >>haslo;

    if ((login=="admin")&&(haslo=="szarlotka"))
    {
        cout << "Ale beka, zalogowany  " << endl;
    }
    else
    {

       if((login=="admin")||(haslo=="szarlotka")) cout<< "blisko by³o" << endl ;
       else cout<< "lol luzer" << endl ;
    }

    return 0;
}
