#include <iostream>
#include <stdlib.h> // rand
#include <time.h>

using namespace std;


int tab[6];

int main()
{
	srand (time(NULL)); //losowanie liczb
	for (int i=0; i<6; i++)
		tab[i]= rand()%50; //wybieranie licz z 49

	for (int i=0; i<6; i++)
		cout <<tab[i] <<endl; //wyswietlanie liczb

	/* //suma liczb w tablicy
	int suma=0;
	for (int i=0; i<6; i++)
		suma +=tab[i];
	cout <<"Suma licz w tablicy wynosi: " <<suma;*/
	return 0;
}
