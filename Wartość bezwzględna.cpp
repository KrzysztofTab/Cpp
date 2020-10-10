#include <iostream>
#include <cmath>

using namespace std;

int x=31, R, D, o1, o2;   // float - zmieno przecikowe 

int main()
{
	cout <<"Ile razy LA Lakers wysapili w finale NBA?" <<endl;
	cout <<"Rick: ";
	cin >>R;
	cout <<"Daryl: ";
	cin >>D;

	o1 = abs(x-R);   // "abs"- oblicza wartość bezwzgelna
	o2 = abs(x-D);   //  "fabs" - oblicza wartosci zmienno przecikowe 

	if (o1<o2) cout <<endl <<"Wygral Rick!" <<endl;
	else if (o2<o1) cout <<endl <<"Wygral Daryl!" <<endl;
	else cout <<endl <<"Remis!" <<endl;

	return 0;
}
