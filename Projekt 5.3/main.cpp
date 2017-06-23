#include <iostream>
#include <iomanip>

using namespace std;
int n;
long double ciag[1000];

int main()

{
    // CIAG FIBONACCIEGO
    cout << "Ile wyrazow ciagu mam obliczyc" << endl;
    cin>> n;

    ciag[0]=1;
    cout <<"Wyraz 1 ma wartosc 1"<<endl;
    ciag[1]=1;
    cout <<"Wyraz 2 ma wartosc 1"<<endl;

    cout << setprecision(100);
    //ustawiamy dok³adnoœæ

int i;
    for (int i=2; i<n ; i++ );
        {
        ciag[i] = ciag[i-1]+ciag[i-2];
        //cout <<"Wyraz "<< i+1 <<" ma wartosc "<<ciag[i]<<endl;
        }


    //cout <<endl<< "wyraz numer" << n << ":" <<ciag[n-1];
    //wyswietlamy n-ty wyraz ciagu.

    //obliczanie liczby z³otej
    // cout <<"zlota liczba wynosi :"<< ciag[n-1]-ciag[n-2]<<endl;
    return 0;
}
