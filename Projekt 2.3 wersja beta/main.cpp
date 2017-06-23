#include <iostream>

using namespace std;
int wiek;

int main()
{
    cout << "Ile masz lat" << endl;
    cin >>wiek ;

    if(wiek<=18){
            cout<<"jestes niepelnoletni i nie mozesz zostac prezydentem"<< endl;
    }
    else if(wiek>=35){
            cout<<" jestes pelnoletni i mozesz zostac prezydentem"<< endl;
    }
    else
            cout<<" jestes pelnoletni i nie mozesz zostac prezydentem"<< endl;

    return 0;
}
