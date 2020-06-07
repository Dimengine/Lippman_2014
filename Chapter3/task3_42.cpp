#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {3,6,7,3,7};
    const size_t size = vec.size();
    int arr[size];
    for(int i = 0; i < size; ++i)
        arr[i] = vec[i];

    for (auto el : arr)
        std::cout << el << " ";    
    std::cout << std::endl;
}