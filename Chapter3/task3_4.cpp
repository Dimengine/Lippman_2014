#include <iostream>
#include <string>

int main()
{
    std::string str1, str2;
    
    std::getline(std::cin, str1);
    std::getline(std::cin, str2);

    std::cout << "Size: ";
    std::cout << (str1 == str2 ? str1 + " == " + str2 + "\n" : (str1 > str2 ? str1 + " > " + str2 + "\n" : str2 + " > " + str1 + "\n"));
    std::cout << "Length: ";
    std::cout << (str1.size() == str2.size() ? str1 + " == " + str2 + "\n" : (str1.size() > str2.size() ? str1 + " > " + str2 + "\n" : str2 + " > " + str1 + "\n"));
}