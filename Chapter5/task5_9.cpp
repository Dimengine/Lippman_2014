#include <iostream>

int main()
{
    char symbol;
    int vowelCount = 0;

    while (std::cin >> symbol)
    {
        if (symbol == 'a')
            ++vowelCount;
        if (symbol == 'o')
            ++vowelCount;
        if (symbol == 'e')
            ++vowelCount;
        if (symbol == 'i')
            ++vowelCount;
        if (symbol == 'u')
            ++vowelCount;
    }
    std::cout << vowelCount << std::endl;
}