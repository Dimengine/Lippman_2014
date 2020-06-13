#include <iostream>
#include <string>

int main()
{
	std::string str1, str2;

	do
	{
		std::cout << "Input two strings: " << std::endl;
		std::cin >> str1 >> str2;

		if (str1.size() > str2.size())
			std::cout << "First string is bigger" << std::endl;
		else if (str2.size() > str1.size())
			std::cout << "Second string is bigger" << std::endl;
		else std::cout << "Strings are equal" << std::endl;
	} while (std::cin);
	return 0;
}