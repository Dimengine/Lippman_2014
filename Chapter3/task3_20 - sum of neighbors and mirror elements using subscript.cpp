#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    int input;

    while (std::cin >> input)
        vec.push_back(input);
    
    //Sum of neighbors
    for(size_t i = 0; i < vec.size() - 1; ++i)
        std::cout << vec[i] + vec[i + 1] << " ";
    std::cout << std::endl;

    //Sum of mirror elements
    for(size_t i = 0; i < (vec.size() + 1) / 2; ++i)
        std::cout << vec[i] + vec[vec.size() - 1 - i] << " ";
    std::cout << std::endl;
}