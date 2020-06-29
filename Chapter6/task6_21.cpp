#include <iostream>

int func (int value, int *pvalue)
{
    if (value > *pvalue)
        return value;
    else return *pvalue;
}

int main()
{
    int a = 10, b = 24;
    std::cout << func(a, &b) << std::endl;
}