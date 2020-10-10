#include <iostream>

using namespace std;
int a, b, c, m;

int main()
{
	cout <<"Podaj 3 liczby rozdielone spacja: ";
	cin >>a >>b >>c;

	m=a;
	if (b>m) m=b;  // jesli zamienimy ">" na "<" to mamy minimum
	if (c>m) m=c;

	cout <<"Max to: "<<m <<endl;

	return 0;
}
