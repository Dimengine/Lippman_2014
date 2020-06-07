#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> vec;
    std::string str;
    while (std::cin >> str)
        vec.push_back(str);
    for (auto el : vec)
        std::cout << el << std::endl; 
}