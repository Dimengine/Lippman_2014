#include <iostream>

int main()
{
    char symbol;
    int aCnt = 0, oCnt = 0, eCnt = 0, iCnt = 0, uCnt = 0;

    while (std::cin >> symbol)
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
        }
    }
    std::cout << "Number of A(a): " << aCnt << std::endl;
    std::cout << "Number of O(o): " << oCnt << std::endl;
    std::cout << "Number of E(e): " << eCnt << std::endl;
    std::cout << "Number of I(i): " << iCnt << std::endl;
    std::cout << "Number of U(u): " << uCnt << std::endl;
}