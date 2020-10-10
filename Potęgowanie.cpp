#include <iostream>
#include <cmath>
#include <iomanip>    // manipulacja wejscia - wyjscia

using namespace std;

long long int x;
unsigned int y;     // "unsigned" - wrtosci tylo dodatnie

int main()
{
	x = (pow(2,32)/2)-1;     //"pow" - podniesienie do potęgi "2" do "32" - "/2" dzielenie na dwa przediały "+"" i "-"
	y = x;
	cout << setprecision (20); //precyzyjne ile liczb do wyswietlenia
	cout <<"MAX: " <<y <<endl;
	cout <<x <<endl;
	cout << sizeof(x) <<endl;   //"sizeof" - wyswietl pełna wielkosć

	return 0;
}