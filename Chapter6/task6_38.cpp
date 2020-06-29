#include <iostream>

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

decltype(odd) &arrPtr(int i)
{
    return (i % 2) ? odd : even;
}

int main()
{
    for (const auto &el : arrPtr(9))
        std::cout << el << std::endl;
}