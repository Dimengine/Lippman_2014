#include <iostream>

int main()
{
	int a, b;
	while (std::cin >> a >> b)
	{
		try
		{
			if (b == 0)
				throw std::runtime_error("Divide by 0!");
			std::cout << "Result is " << a / b << std::endl;
			break;
		}
		catch (std::runtime_error err)
		{
			std::cout << err.what() << std::endl << "Input other numbers? (y or n)" << std::endl;
			char c;
			std::cin >> c;
			if (!std::cin || c == 'n')
				break;
		}
	}
}