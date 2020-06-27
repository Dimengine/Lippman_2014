#include <iostream>

int main()
{
    int a = 128;
    int b = 234;
    int *pa = &a;
    std::cout << *pa << std::endl;
    pa = &b;
    std::cout << *pa << std::endl;
    *pa = 12;
    std::cout << *pa << std::endl;
}