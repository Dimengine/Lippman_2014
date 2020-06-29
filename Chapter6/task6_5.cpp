#include <iostream>

int my_abs(int a)
{
    if (a >= 0)
        return a;
    else return -a;
}

int main()
{
    std::cout << my_abs(-1) << std::endl;
}