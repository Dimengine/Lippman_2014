#include <iostream>

void print (const int (&ia)[10])
{
    for (auto el : ia)
        std::cout << el << std::endl;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    print(a);
}