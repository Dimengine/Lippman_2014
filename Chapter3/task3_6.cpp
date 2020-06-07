#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string str;
    std::cin >> str;

    for(auto &c : str)
        c = 'X';
    std::cout << str;
}