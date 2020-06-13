#include <iostream>

int main()
{
    int val = 0, sum = 0;
    while (val <= 10)
        sum += val, ++val;
    std::cout << sum << std::endl;
}