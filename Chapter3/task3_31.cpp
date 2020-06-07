#include <iostream>

int main()
{
    const size_t size = 10;
    int arr[size];
    int arr2[size];

    for(int a = 0; a < size; ++a)
        arr[a] = a + 1;
    
    for(int a = 0; a < size; ++a)
        arr2[a] = arr[a];

    for(auto el : arr)
        std::cout << el << " "; 
    std::cout << std::endl;
    for(auto el : arr2)
        std::cout << el << " "; 
}