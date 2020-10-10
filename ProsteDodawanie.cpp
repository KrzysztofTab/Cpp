#include <iostream>

using namespace std;

int main()
{
    //int suma =0;
    int test,liczba;
   	cout<<"ilosc tesow: ";
	cin >> test;
	for (int i=0; i<test; i++)
	{
	    int suma =0;
	   	cout << "ilosc liczb: ";
		cin >> liczba;
		for (int a=0; a<liczba; a++)
		{
            int tablica[a];
			cin >>tablica[a];
			suma +=tablica[a];
        }
      cout <<endl <<"suma: "<< suma <<endl;
      cout << endl;
	}
	return 0;
}
