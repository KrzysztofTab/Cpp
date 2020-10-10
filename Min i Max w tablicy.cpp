#include <iostream>
using namespace std;
#include <iostream>

using namespace std;

int main() {

    const int R = 10;    // Rozmiar tablicy będący stałą
    int tablica[R] = {23, 41, 432, 543, 41, 1543, 76, 21, 54, 12};  // Tworzę sobie tablicę 10 obiektów typu int, i
                                                                    // od razu ją inicjuję jakimiś liczbami.
            // Szukam największej liczby:
            // Tworzę dodatkową zmienną, i inincjuję ją
            // wartością pierwszego elementu tablicy
    int najwieksza = tablica[0];
    for(int i=0; i<R; i++)                                     // W pętli porównuję elementy tablicy
        if(tablica[i] > najwieksza) najwieksza = tablica[i];   // Jeżeli 'ten' element jest większy od poprzednika,
                                                               // to uznaj ją za największą liczbę

            // Wyświetlenie:
    cout << "Najwieksza liczba: " << najwieksza << endl;

            // Teraz w identyczny sposób jak wcześniej, szukam najmniejszej,
            // jednak teraz w pętli zmieniam znak '>' na '<'.

    int najmniejsza = tablica[0];
     for(int i=0; i<R; i++)
         if(tablica[i] < najmniejsza)  najmniejsza = tablica[i];

    cout << "Najmniejsza liczba: " << najmniejsza << endl;
}
