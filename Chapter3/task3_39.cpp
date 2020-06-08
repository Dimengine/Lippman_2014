#include <iostream>
#include <string>

int main()
{
    //C++ style
    std::string str1 = "String1";
    std::string str2 = "String1";
    std::cout << (str1 == str2 ? "str1 == str2\n" : str1 > str2 ? "str1 > str2\n" : "str2 > str1\n");
}