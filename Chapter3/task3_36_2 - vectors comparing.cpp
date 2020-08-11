#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {2,6,6};
    std::vector<int> vec2 = {2,6,6};

    std::cout << (vec == vec2 ? "vec == vec2\n" : vec > vec2 ? "vec > vec2\n" : "vec2 > vec\n");
}