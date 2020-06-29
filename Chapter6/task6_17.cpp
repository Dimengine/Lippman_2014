#include <iostream>
#include <string>
#include <cctype>

bool is_have_uppercase (const std::string &str)
{
    for(auto el : str)
        if(isupper(el))
            return true;
    return false;
}

void string_to_lower (std::string &str)
{
    for(auto &el : str)
        el = tolower(el);
}

int main()
{
    std::string str = "Hello world";
    std::cout << is_have_uppercase(str) << std::endl;
    string_to_lower(str);
    std::cout << str << std::endl;
}