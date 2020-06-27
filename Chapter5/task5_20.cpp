#include <iostream>
#include <string>

int main()
{
    std::string str, prev;
    bool dublicates = false;

    while (std::cin >> str)
    {
        if (str == prev)
        {
            std::cout << "Dublicate: " << str << std::endl;
            dublicates = true;
            break;
        }
        else prev = str;
    }
    if (!dublicates)
        std::cout << "No dublicates" << std::endl;
}