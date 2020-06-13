#include <iostream>

int main()
{
    int someValue = 1, x = 5, y = 10;

    someValue ? ++x, ++y : --x, --y; //(someValue ? ++x, ++y : --x), --y;
    std::cout << someValue << " " << x << " " << y;
}