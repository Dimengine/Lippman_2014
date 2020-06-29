#include <iostream>
#include <string>

bool is_empty (const std::string &s)
{
    return s.empty();
}

int main()
{
    std::string str1 = "String";
    const std::string str2 = "Const string";

    std::cout << is_empty(str1) << std::endl;
    std::cout << is_empty(str2) << std::endl;
}