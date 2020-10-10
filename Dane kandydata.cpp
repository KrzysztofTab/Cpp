#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main()
{
    string imie[3];
    string nazwisko[3];
    int wiek[3];

    for( int i=0; i<3 ; i++ )
    {
        cout <<endl <<i+1 <<" Osoba" <<endl;
        cout << endl <<" Imie: ";
        cin>> imie[i];
        cout <<" Nazwisko: ";
        cin>> nazwisko[i];
        cout <<" Wiek: ";
        cin >>wiek[i];
        system("cls");
    }
    system("cls");
    cout << endl <<" Lp. " <<" Imie "<<" Nazwisko " <<" Wiek " <<endl;
    cout << "--------------------------" <<endl;

    for( int i=0; i<3; i++ )
    {
        cout <<i+1 <<"  "<<imie[i] <<" " <<nazwisko[i] <<" " <<wiek[i] <<" lat"<<endl;
    }

    return 0;

}
