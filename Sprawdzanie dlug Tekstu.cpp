#include <iostream>
#include <string>

int main()
{
    std::string sNapis = "To jest napis m�j napis pisany dzi� rano";
    std::cout << "Napis: " << sNapis << std::endl;
    std::cout << "Dlugosc napisu to (metoda size): " << sNapis.size() << std::endl;
    std::cout << "Dlugosc napisu to (metoda length): " << sNapis.length() << std::endl;
    return 0;
}
