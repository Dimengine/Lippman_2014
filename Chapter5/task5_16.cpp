#include <iostream>
#include <vector>

int main()
{
    std::vector<char> vec;
    char input;

    while (std::cin >> input && input != '.')
        vec.push_back(input);
    std::cout << std::endl;
    for(auto beg = vec.begin(); beg != vec.end(); ++beg)
        std::cout << *beg;
    std::cout << std::endl;
}