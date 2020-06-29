#include <iostream>

int fact(int a)
{
    if (a > 1)
        return a * fact(a - 1);
    else return 1;
}

int main()
{
    int number;
    std::cin >> number;
    std::cout << fact(number) << std::endl;
}