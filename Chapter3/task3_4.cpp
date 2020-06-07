#include <iostream>
#include <string>

int main()
{
    std::string str1, str2;
    
    std::getline(std::cin, str1);
    std::getline(std::cin, str2);

    std::cout << "Size: ";
    str1 == str2 ? std::cout << str1 << " == " << str2 << "\n" : (str1 > str2 ? std::cout << str1 << " > " << str2 << "\n" : std::cout << str2 << " > " << str1 << "\n");
    std::cout << "Length: ";
    str1.size() == str2.size() ? std::cout << str1 << " == " << str2 << "\n" : (str1.size() > str2.size() ? std::cout << str1 << " > " << str2 << "\n" : std::cout << str2 << " > " << str1 << "\n");
}