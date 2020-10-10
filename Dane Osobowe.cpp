#include <iostream>
#include <limits>
#include <string>

int main()
{
    std::string imie;
    std::string nazwisko;
    std::string o_sobie;
    std::cout << "Podaj imie: ";
    std::cin >> imie;
    std::cout << "Podaj nazwisko: ";
    std::cin >> nazwisko;
    std::cout << "Napisz zdanie o sobie: ";
    std::cin.ignore( std::numeric_limits < std::streamsize >::max(), '\n' );
    std::getline( std::cin, o_sobie );
    std::cout << "Twoje imie to: " << imie << std::endl;
    std::cout << "Twoje nazwisko to: " << nazwisko << std::endl;
    std::cout << "Napisales o sobie: " << o_sobie << std::endl;
    return 0;
}
