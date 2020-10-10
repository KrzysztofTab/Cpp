#include <iostream>

using namespace std;
int test, liczba, suma;

int main()
{
   cout<<"ilosc tesow: ";
	cin >> test;
	for (int i=0; i<test; i++)
	{
	   cout << "ilosc liczb: ";
		cin >> liczba;
		for (int a=0; a<liczba; a++)
		{
		   suma=0;
			int tablica[a];
			cin >>tablica[a];
			suma += tablica[a];
      }
      cout <<endl <<"suma: "<< suma;
	}
	return 0;
}
