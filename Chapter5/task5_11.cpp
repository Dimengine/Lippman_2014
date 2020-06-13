#include <iostream>
#include <string>

int main()
{
    std::string line;
    int vowelCount = 0, tabCount = 0, spaceCount = 0, lineCount = 0;

    while (std::getline(std::cin, line))
    {
        for (auto symbol : line)
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
            else if (symbol == ' ')
                ++spaceCount;
            else if (symbol == '\t')
                ++tabCount;
        }
        ++lineCount;
    }
    std::cout << "Vowel counter: " << vowelCount << std::endl;
    std::cout << "Space counter: " << spaceCount << std::endl;
    std::cout << "Tab counter: " << tabCount << std::endl;
    std::cout << "Line counter: " << lineCount << std::endl;
}