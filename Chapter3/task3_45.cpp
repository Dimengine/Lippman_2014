#include <iostream>

int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    //range for
    for (auto &row : arr)
    {
        for (auto el : row)
            std::cout << el << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //for with subscript
    for (auto i = 0; i < 3; ++i)
    {
        for(auto j = 0; j < 4; ++j)
            std::cout << arr[i][j] << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //for with pointers
    for (auto i = std::begin(arr); i < std::end(arr); ++i)
    {
        for(auto j = std::begin(*i); j < std::end(*i); ++j)
            std::cout << *j << " ";
        std::cout << std::endl;
    }
}