#include <iostream>

int main()
{
    int number;
    std::cout << "Please, enter the number: ";
    while(std::cin >> number && number != 42)
        std::cout << "Number is " << number << ". Enter the next nummber: ";
}