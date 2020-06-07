#include <iostream>
#include <vector>

int main()
{
    int arr[] = {3,6,7,3,7};
    std::vector<int> vec(std::begin(arr), std::end(arr));

    for(auto el : vec)
        std::cout << el << " ";
    std::cout << std::endl;
}