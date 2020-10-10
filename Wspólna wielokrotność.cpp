#include <iostream>

using namespace std;

int ile_grup;

int nwd (int a, int b) // funkcja obliczająca nwd dwóch liczba - a i b
{
	if (b == 0) // jezeli b jest rowne 0, a jest najwieszym wspolnym dzielnikiem podanych liczb
	return a;
	nwd(b,a%b); // jezeli b jest rozne od zera wywolujemy funkcje rekurencyjnie dla b oraz a%b
}
int main()
{
    //cout <<"Podaj ile grup od 1 do 20: ";
    cin >>ile_grup;
    cout <<endl;
    for (int i=0; i<ile_grup; i++)
    {
    	int grupaA[i];
    	int grupaB[i];
    	//cout << "Podaj ilosć dzieci w grupie A (powyzej =>10) -spacja - grupaB (poniżej <= 30)"<< endl;
    	cin >>grupaA[i] >>grupaB[i];
    	cout << (grupaA[i]*grupaB[i])/nwd(grupaA[i], grupaB[i]) <<endl;
    }
	return 0;
}
