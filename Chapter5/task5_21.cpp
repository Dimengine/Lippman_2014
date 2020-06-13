#include <iostream>
#include <string>
#include <cctype>

int main()
{
	std::string str, prev;
	bool dublicates = false;

	while (std::cin >> str)
	{
		if (str == prev)
		{
            if (!isupper(str[0]))
            {
                prev = str;
                continue;
            }
			std::cout << "Dublicate: " << str << std::endl;
			dublicates = true;
			break;
		}
		else prev = str;
	}
	if (!dublicates)
		std::cout << "No dublicates" << std::endl;
	return 0;
}