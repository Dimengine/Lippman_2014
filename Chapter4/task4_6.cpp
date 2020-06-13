#include <iostream>
#include <string>

int main()
{
    int number;
    std::cin >> number;

    std::cout << number << (number % 2 ? " is odd\n" : " is even\n");
}