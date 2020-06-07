#include <iostream>
#include <string>

int main()
{
    std::string str, resStr;
    while (std::getline(std::cin, str))
    {
        resStr += str + " ";
    }
    std::cout << resStr << std::endl;
}