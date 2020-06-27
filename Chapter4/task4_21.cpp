#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {3, 5, 2, 44, 23};

    for(auto &el : vec)
        std::cout << (el % 2 ? el *= 2 : el) << " ";
    std::cout << std::endl;
}