#include <iostream>

int main()
{
    int i = 10;
    double d = 2.2;

    std::cout << (i *= static_cast<int>(d)) << std::endl;
}