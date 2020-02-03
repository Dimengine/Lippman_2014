#include <iostream>

int fact(int number)
{
    if (number == 1)
        return number;
    else
        return number * fact(number - 1);
}

int main()
{
    int number;
    std::cin >> number;
    std::cout << fact(number) << std::endl;
    return 0; 
}