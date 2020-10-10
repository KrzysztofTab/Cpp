#include <iostream>

using namespace std;

int main()
{
	int test,liczba,k_liczby, suma=0;
	//cout <<"ile testow: ";
	cin >> test;
	while (test)
    {
        suma=0;
        //cout <<"ile liczb: ";
        cin >>liczba;
        while (liczba)
        {
            //suma=0;
            cin >>k_liczby;
            suma +=k_liczby;
            liczba--;
        }
            cout <<suma <<endl;
            test--;
    }
	return 0;
}
