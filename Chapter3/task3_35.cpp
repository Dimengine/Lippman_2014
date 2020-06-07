#include <iostream>

int main()
{
    const size_t size = 5;
    int arr[size] = {1,4,5,3,5};
    int *b = arr, *e = arr + size;

    while (b != e)
        *b++ = 0;
    
    for(auto el: arr)
        std::cout << el << " ";
    std::cout << std::endl;
}