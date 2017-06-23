#include <iostream>

using namespace std;
int wiek;

int main()
{
    cout << "Ile masz lat" << endl;
    cin >>wiek ;

    if(wiek>=18){
            cout<<"jestes pelnoletni"<< endl;
            if(wiek>=35) {cout<<"mozesz kandydowac na prezydenta";}
            else cout<< "nie mozesz kandydowac na prezydenta";
    }
    else {cout<<"Jestes niepelnoletni, nie mozesz kandydowac na prezydenta";}
    return 0;
}
