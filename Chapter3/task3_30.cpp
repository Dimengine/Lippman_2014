#include <iostream>

int main()
{
    const size_t size = 10;
    int arr[size];

    for(int a = 0; a < size; ++a)
        arr[a] = a + 1;

    for(auto el : arr)
        std::cout << el << " "; 
}