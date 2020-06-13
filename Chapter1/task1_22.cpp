#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item, res;

	while (std::cin >> item)
		res += item;
	std::cout << res << std::endl;
}