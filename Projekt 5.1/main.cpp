#include <iostream>

using namespace std;
float tablica[5];
float srednia;
int main()
{


    cout << "Podaj ocene 1" << endl;
    cin>> tablica[0];
    cout << "Podaj ocene 2" << endl;
    cin>> tablica[1];
    cout << "Podaj ocene 3" << endl;
    cin>> tablica[2];
    cout << "Podaj ocene 4" << endl;
    cin>> tablica[3];
    cout << "Podaj ocene 5" << endl;
    cin>> tablica[4];

    srednia=(tablica[1]+tablica[2]+tablica[3]+tablica[4]+tablica[0])/5;

    cout<<"srednia wynosi"<<srednia;

    return 0;
}
