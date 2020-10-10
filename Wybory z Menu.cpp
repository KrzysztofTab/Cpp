#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <string>
#include <algorithm>

using namespace std;

string napis;
char wybor;

int main()
{
    cout <<"Wpisz tekst: ";
    getline(cin,napis);
    system("cls");
for(;;)
{
    cout <<endl <<napis <<endl;
    cout <<endl;
    cout << "------------------------------" <<endl;
    cout << "MENU GLOWNE" <<endl;
    cout << "------------------------------" <<endl;
    cout << "1. Zmian liter ma³e na duze" <<endl;
    cout << "2. Zmian liter duze na ma³e" <<endl;
    cout << "3. Szukanie tekstu" <<endl;
    cout << "4. Kasowanie tekstu" <<endl;
    cout << "5. Dopisywanie tekstu" <<endl;
    cout << "6. Zastepowanie tekstu" <<endl;
    cout << "7. Nowy tekst" <<endl;
    cout <<endl << "8. KONIEC PROGRAMU" <<endl;
    cout << endl;
    wybor=getch();
    switch(wybor)
    {
    case '1':
        {
            transform (napis.begin(),napis.end(),napis.begin(), ::toupper);
            cout << napis << endl;
        }
    break;

    case '2':
            transform (napis.begin(),napis.end(),napis.begin(), ::tolower);
            cout << napis << endl;
    break;

    case '3':
            {
                string szukaj;
                cout <<"Czego szukac: ";
                cin >> szukaj;
                size_t pozycja = napis.find(szukaj);
                if (pozycja!=string::npos)
                    {
                    cout  <<"Znaleziono na pozycji: " <<pozycja;
                    }
                else
                    {
                    cout <<"Nie znaleziono!";
                    }
            }
    break;

    case '4':
            {
                string wykasuj;
                cout <<"Co wykasowac: ";
                cin >> wykasuj;
                size_t pozycja = napis.find(wykasuj);
                if (pozycja!=string::npos)
                    // znaleœæ d³ugoœæ s³owa
                napis.erase(pozycja,4);
                cout << napis;
            }
    break;

    case '5':
            {   // znaleœæ koniec tekstu
                string wpisz;
                cout <<"Co wpisac: ";
                cin >> wpisz;
                napis.insert(20,wpisz);
                cout << napis;
            }
    break;

    case '6':
            {
                string szukaj;
                cout <<"Co zastapic: ";
                cin >> szukaj;
                size_t pozycja = napis.find(szukaj);
                 // d³ugoœ zanków do zastapienia
                string zastap;
                cout <<"Co wpisac: ";
                cin >> zastap;
                napis.replace(pozycja,4,zastap);
                cout << napis;
            }
    break;

    case '7':
            {
                cout << "Nowy tekst: ";
                getline(cin,napis);

                /* d³ugoœ zanków do zastapienia
                string szukaj;
                cout <<"Co wyciac: ";
                cin >> szukaj;
                size_t pozycja = napis.find(szukaj);

                string nowynapis = napis.substr();
                napis.replace(pozycja,/*ilosci znalków);
                cout << nowynapisis; */
            }
    break;

    case '8':
	   {	
			unsigned ZliczZnaki(napis, char Znak)
			{
			unsigned uIlosc = 0;
			for (unsigned i = 0; i <= napis.length() - 1; ++i)
				{
					if (napis[i] == Znak) ++uIlosc;
				}

			char SzukanyZnak;
			cout << "Podaj znak, ktory bedzie liczony: ";
			cin >> SzukanyZnak;
			cout << "Znak '" <<SzukanyZnak <<"' wystepuje w tekscie "
		<< ZliczZnaki(napis, SzukanyZnak) << " raz(y)." << endl;
	   }
    break;
	
	case '9':
			exit(0);
	break		

    default: cout<<"Nie ma takiej opcji w menu!";
    }
    getchar();getchar();
    system("cls");
}
    return 0;
}
