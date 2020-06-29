#include <iostream>
#include <vector>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    std::vector<int (*) (int, int)> vec;
    vec.push_back(add);

    std::cout << vec[0](5, 5) << std::endl;
    std::cout << vec[0](3, 4) << std::endl;
}