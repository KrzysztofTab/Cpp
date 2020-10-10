#include <iostream>
#include <cmath>
#include <iomanip>    // manipulacja wejscia - wyjscia

using namespace std;
float kat;

int main()
{
	cout <<"Podaj wartosc kata: ";
	cin >> kat;

	cout << sin(kat*M_PI/180) <<endl; //katy musimy zamienić na radiany (rozmiar konta * PI /180 stopni)
	cout << cos(kat*M_PI/180) <<endl;
	cout << tan(kat*M_PI/180) <<endl;
	cout << 1/tan(kat*M_PI/180) <<endl; // cotangens "1/tan"
	
	return 0;
}