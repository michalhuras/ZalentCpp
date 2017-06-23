#include <iostream>

using namespace std;

int uczniowie,x,y;
int cukierki;

int main()
{
    cout << "Ilosc osob w klasie...";
    cin >> uczniowie ;

    cout << "Ilosc cukierkow ktore kupila mama...";
    cin >> cukierki ;

    x=cukierki/(uczniowie-1);
    cout << "Ilosc cukierkow dla kazdego ucznia:"<< x  <<endl;
    y=cukierki-(x*(uczniowie-1));
    cout << "Ilosc cukierkow dla Jasia:"<< y ;
    return 0;
}
