#include <iostream>

int main()
{
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;

	r2 = 3.14159; //Ok
	std::cout << r2 << std::endl;
	r2 = r1; //Ok
	std::cout << r2 << std::endl;
	i = r2; //Ok
	std::cout << i << std::endl;
	r1 = d; //Ok
	std::cout << r1 << std::endl;
}