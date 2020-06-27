#include <iostream>

int main()
{
    int number, sum = 0;

    std::cout << "Input number: ";
    while (std::cin >> number)
    {
        sum += number;
        std::cout << "Sum is: " << sum << std::endl;
        std::cout << "Next number: ";
    }
    std::cout << "\nFinally result is: " << sum << std::endl;
}