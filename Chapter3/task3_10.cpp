#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string str;
    std::getline(std::cin, str);

    for(char &c : str)
        if(!ispunct(c))
            std::cout << c;
}