#include <iostream>

void print1 (const int* value)
{
    std::cout << *value << std::endl;
}

void print2 (const int *beg, const int *end)
{
    while (beg != end)
        std::cout << *beg++ << std::endl;
}

void print3 (const int ia[], size_t size)
{
    for (size_t i = 0; i != size; ++i)
        std::cout << ia[i] << std::endl;
}

void print4 (int (&arr)[2])
{
    for (auto el : arr)
        std::cout << el << std::endl;
}

void print5 (int (*matrix)[2], int rowSize)
{
    for (size_t i = 0; i != rowSize; ++i)
        std::cout << (*matrix)[i] << std::endl;
}

int main()
{
    int i = 0, j[2] = {0, 1};
    print1(&i);
    print1(j);
    std::cout << std::endl;

    print2(std::begin(j), std::end(j));
    std::cout << std::endl;

    print3(j, std::end(j) - std::begin(j));
    std::cout << std::endl;

    print4(j);
    std::cout << std::endl;

    print5(&j, std::end(j) - std::begin(j));
    std::cout << std::endl;
}