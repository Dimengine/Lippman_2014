#include <iostream>
#include <string>
#include <cctype>

/*
//---while---
int main()
{
    std::string str;
    std::cin >> str;
    std::size_t i = 0;
    while(i < str.size())
        str[i++] = 'X';
    std::cout << str;
}
*/
//---for---
int main()
{
    std::string str;
    std::cin >> str;
    for (std::size_t i = 0; i < str.size(); ++i)
        str[i] = 'X';
    std::cout << str;
}