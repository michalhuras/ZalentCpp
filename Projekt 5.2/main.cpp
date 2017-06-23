#include <iostream>

using namespace std;
float tablica[5];
float srednia;
float suma=0;
int a;
int main()

{
    for(int i=1;i<=5;i++)
    {cout << "Podaj ocene" <<i<< endl;
    a=i-1;
    cin>> tablica[a];
    suma=suma+tablica[a];
    cout<< "suma wynosi"<< suma <<endl ;
    }
    cout << "Oceny wynosz¹ kolejno:" << endl;
    cout << tablica[0] << endl;
    cout << tablica[1] << endl;
    cout << tablica[2] << endl;
    cout << tablica[3] << endl;
    cout << tablica[4] << endl;


    srednia=(tablica[1]+tablica[2]+tablica[3]+tablica[4]+tablica[0])/5;

    cout<<"srednia wynosi"<<srednia;

    return 0;
}
