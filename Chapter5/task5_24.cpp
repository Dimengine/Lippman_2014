#include <iostream>

int main()
{
	int a = 5, b = 1;
	if (b == 0)
        throw std::runtime_error("Divide by 0!");
    std::cout << "Result is " << a / b << std::endl;
}