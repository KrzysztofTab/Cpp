#include <iostream>
#include <cmath>

using namespace std;

float suma=0, srednia, odchylenie, szukana1, szukana2;
int ile_liczb;
bool drugaliczba= false;


int main()
{
    cout<<"Podaj ile liczb: ";
    cin>>ile_liczb;
    cout <<endl;                         //licznik tablicy
    float liczba[ile_liczb];                 // tablica z ruchomym licznikiem
    for (int i=0; i<ile_liczb; i++)
        {
            cout <<"podaj: " <<i+1<< " liczbe: ";
            cin >>liczba[i];
            suma+=liczba[i];
        }
    srednia = suma / ile_liczb;
    cout <<"Srednia: " <<srednia << endl;

    szukana1= liczba[0];
    odchylenie= abs((srednia- szukana1));  //od sredniej odejmujemy tablice; abs- zwraca wartoś bezwzgledną
    float x[ile_liczb];
    for(int i=0; i<ile_liczb; i++)
        {
            x[i]= abs((srednia-liczba[i]));
            if(x[i]< odchylenie)
                {
                    szukana1= liczba[i];
                    odchylenie= x[i];
                }
            if((x[i]= odchylenie) && (liczba[i]!= szukana1))
                {
                    szukana2= liczba[i];
                    drugaliczba= true;
                    odchylenie= x[i];
                }
        }
        cout<<endl<<"liczba najblizsza sredniej: "<<szukana1;
        if(drugaliczba= true)
        {
          cout<<" oraz: "<<szukana2;
        }
    return 0;
}
