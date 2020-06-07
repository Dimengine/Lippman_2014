#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    int input;

    while (std::cin >> input)
        vec.push_back(input);
    
    //Sum of neighbors
    for(auto it = vec.begin(); it != vec.end() - 1; ++it)
        std::cout << *it + *(it + 1) << " ";
    std::cout << std::endl;

    //Sum of mirror elements
    for(auto bit = vec.begin(), eit = vec.end() - 1; bit != vec.end() - (vec.end() - vec.begin()) / 2; ++bit, --eit)
        std::cout << *bit + *eit << " ";
    std::cout << std::endl;
}