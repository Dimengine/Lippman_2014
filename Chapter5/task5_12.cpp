#include <iostream>

int main()
{
    char symbol;
    int ffcnt = 0, flcnt = 0, ficnt = 0;

    while (std::cin >> symbol)
    {
        if (symbol == 'f')
        {
            std::cin >> symbol;
            switch (symbol)
            {
                case 'f': 
                {
                    ++ffcnt;
                    break;
                }
                case 'l': 
                {
                    ++flcnt;
                    break;
                }
                case 'i': 
                {
                    ++ficnt;
                    break;
                }
            }
        }
    }

    std::cout << "ff: " << ffcnt << std::endl;
    std::cout << "fl: " << flcnt << std::endl;
    std::cout << "fi: " << ficnt << std::endl;
}