#include <iostream>

int func (std::initializer_list<int> il)
{
    int sum = 0;
    for (auto &el : il)
        sum += el;
    return sum;
}

int main()
{
    std::cout << func({4, 3, 5, 3, 5, 5}) << std::endl;
}