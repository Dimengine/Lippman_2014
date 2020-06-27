#include <iostream>
#include <string>

int main()
{
    std::string line;
    int aCnt = 0, oCnt = 0, eCnt = 0, iCnt = 0, uCnt = 0, tabCount = 0, spaceCount = 0, lineCount = 0;

    while (std::getline(std::cin, line))
    {
        for (auto symbol : line)
        {
            switch (symbol)
            {
                case 'a': case 'A':
                {
                    ++aCnt;
                    break;
                }
                case 'o': case 'O':
                {
                    ++oCnt;
                    break;
                }
                case 'e': case 'E':
                {
                    ++eCnt;
                    break;
                }
                case 'i': case 'I':
                {
                    ++iCnt;
                    break;
                }
                case 'u': case 'U':
                {
                    ++uCnt;
                    break;
                }
                case ' ':
                {
                    ++spaceCount;
                    break;
                }
                case '\t':
                {
                    ++tabCount;
                    break;
                }
            }
        }
        ++lineCount;
    }
    std::cout << "\nNumber of A(a): " << aCnt << std::endl;
    std::cout << "Number of O(o): " << oCnt << std::endl;
    std::cout << "Number of E(e): " << eCnt << std::endl;
    std::cout << "Number of I(i): " << iCnt << std::endl;
    std::cout << "Number of U(u): " << uCnt << std::endl;
    std::cout << "Space counter: " << spaceCount << std::endl;
    std::cout << "Tab counter: " << tabCount << std::endl;
    std::cout << "Line counter: " << lineCount << std::endl;
}