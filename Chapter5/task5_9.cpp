#include <iostream>

int main()
{
    char symbol;
    int vowelCount = 0;

    while (std::cin >> symbol)
    {
        if (symbol == 'a')
            ++vowelCount;
        else if (symbol == 'o')
            ++vowelCount;
        else if (symbol == 'e')
            ++vowelCount;
        else if (symbol == 'i')
            ++vowelCount;
        else if (symbol == 'u')
            ++vowelCount;
    }
    std::cout << vowelCount << std::endl;
}