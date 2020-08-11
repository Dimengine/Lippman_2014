#include <iostream>

int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    typedef int (&int_arr1)[4];
    typedef int (*int_arr2)[4];

    //range for
    for (int_arr1 row : arr)
    {
        for (int el : row)
            std::cout << el << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //for with subscript
    for (size_t i = 0; i < 3; ++i)
    {
        for(size_t j = 0; j < 4; ++j)
            std::cout << arr[i][j] << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //for with pointers
    for (int_arr2 i = std::begin(arr); i < std::end(arr); ++i)
    {
        for(int *j = std::begin(*i); j < std::end(*i); ++j)
            std::cout << *j << " ";
        std::cout << std::endl;
    }
}