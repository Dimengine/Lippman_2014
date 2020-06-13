#include <iostream>
#include <vector>

int main()
{
    std::vector<char> vec;
    char input;

    for(;std::cin >> input && input != '.';)
        vec.push_back(input);
    std::cout << std::endl;

    auto beg = vec.begin();
    while(beg != vec.end())
        std::cout << *beg++;
    std::cout << std::endl;
}