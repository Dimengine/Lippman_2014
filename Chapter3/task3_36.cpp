#include <iostream>

int main()
{
    int arr[] = {2,5,6};
    int arr2[] = {2,5,6};

    auto beg = std::begin(arr), end = std::end(arr);
    auto beg2 = std::begin(arr2), end2 = std::end(arr2);

    auto size = end - beg;
    auto size2 = end2 - beg2;

    for(; (beg != end) && (beg2 != end2); ++beg, ++beg2)
    {
        if(*beg == *beg2)
            continue;
        else if (*beg > *beg2)
        {
            std::cout << "arr > arr2" << std::endl;
            return 0;
        }
        else if (*beg2 > *beg)
        {
            std::cout << "arr2 > arr" << std::endl;
            return 0;
        }
    }
    if (size > size2)
        std::cout << "arr > arr2" << std::endl;
    else if (size2 > size)
        std::cout << "arr2 > arr" << std::endl;
    else std::cout << "arr == arr2" << std::endl;
}