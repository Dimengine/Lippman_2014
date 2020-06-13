#include <iostream>

int main()
{
    char symbol;
    int vowelCount = 0;

    while (std::cin >> symbol)
    {
        if (symbol == 'a' || symbol == 'A')
            ++vowelCount;
        else if (symbol == 'o' || symbol == 'O')
            ++vowelCount;
        else if (symbol == 'e' || symbol == 'E')
            ++vowelCount;
        else if (symbol == 'i' || symbol == 'I')
            ++vowelCount;
        else if (symbol == 'u' || symbol == 'U')
            ++vowelCount;
    }
    std::cout << vowelCount << std::endl;
}