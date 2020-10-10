#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main()
{
    string imie[ 2 ];
    string nazwisko[ 2 ];

    int wiek[ 2 ];
    for( int i = 0; i < 2; i++ )
	{
		 //wczytajOsobe( imie[ i ], nazwisko[ i ], wiek[ i ] );
		 /*cout << "Wpisz imie "<<i+1 <<" osoby: ";
		 getline( cin, imie[i] );
		 cout << "Wpisz nazwisko "<<i+1 <<" osoby: ";
		 getline( cin, nazwisko[i] );*/

		 cout << "Wpisz wiek "<<i+1 <<" osoby: ";
		 cin >> wiek[i];
    }
    cout << endl;
    for( int i = 0; i < 2; i++ )
    {
        //wypiszOsobe( imie[ i ], nazwisko[ i ], wiek[ i ] );
        cout << "Dane " <<i+1 <<" osoby: " << endl << imie[i] <<" " << nazwisko[i] << " " <<wiek[i] <<endl;

    }
    return 0;
}
