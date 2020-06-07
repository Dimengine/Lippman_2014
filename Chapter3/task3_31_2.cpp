#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    std::vector<int> vec2;

    for(int a = 0; a < 10; ++a)
        vec.push_back(a + 1);
    
    vec2 = vec;

    for(auto el : vec)
        std::cout << el << " "; 
    std::cout << std::endl;
    for(auto el : vec2)
        std::cout << el << " "; 
}