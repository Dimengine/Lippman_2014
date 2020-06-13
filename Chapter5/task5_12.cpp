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
			if (symbol == 'f')
				++ffcnt;
			else if (symbol == 'l')
				++flcnt;
			else if (symbol == 'i')
				++ficnt;
		}
	}

	std::cout << "ff: " << ffcnt << std::endl;
    std::cout << "fl: " << flcnt << std::endl;
    std::cout << "fi: " << ficnt << std::endl;
}