#include <iostream>
#include <cmath>

using namespace std;
float liczba;


int main()
{
	cout <<"Podaj liczbe: " ;
	cin >> liczba;

	cout <<"Round: " <<round(liczba) <<endl;  //zaokrąglić
	cout <<"W gore: " <<ceil(liczba) <<endl;  // zaokraglanie w górę
	cout <<"w dol: " <<floor(liczba) <<endl;  // zaokrahlanie w dół
	cout <<"obcinanie: " <<trunc(liczba) <<endl; // obcina liczby po przecinku

	return 0;
}
