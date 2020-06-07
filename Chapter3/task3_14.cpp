#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    int number;
    while (std::cin >> number)
        vec.push_back(number);
    for (auto el : vec)
        std::cout << el << std::endl; 
}