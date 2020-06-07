#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {2,6,6};
    std::vector<int> vec2 = {2,6,6};

    vec == vec2 ? std::cout << "vec == vec2" : vec > vec2 ? std::cout << "vec > vec2" : std::cout << "vec2 > vec";
}