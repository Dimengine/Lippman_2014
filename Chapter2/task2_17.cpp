#include <iostream>

int main()
{
	int i, &ri = i;
	i = 5; ri = 10;
	std::cout << i << " " << ri << std::endl; //i = 10, ri = 10
}