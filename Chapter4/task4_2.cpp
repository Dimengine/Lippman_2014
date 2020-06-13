#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec {1,10,20,30,40};

    std::cout << *vec.begin() << " " << (*((vec.begin)())) << std::endl;
    std::cout << *vec.begin() + 1 << " " << ((*((vec.begin)())) + 1) << std::endl;
}