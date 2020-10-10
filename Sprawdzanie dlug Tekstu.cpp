#include <iostream>
#include <string>

int main()
{
    std::string sNapis = "To jest napis mój napis pisany dziœ rano";
    std::cout << "Napis: " << sNapis << std::endl;
    std::cout << "Dlugosc napisu to (metoda size): " << sNapis.size() << std::endl;
    std::cout << "Dlugosc napisu to (metoda length): " << sNapis.length() << std::endl;
    return 0;
}
