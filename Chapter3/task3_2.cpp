#include <iostream>
#include <string>

int main()
{
    std::string str;
    while (std::getline(std::cin, str)) // while (std::cin >> str)
    {
        std::cout << str << std::endl;
    }
}