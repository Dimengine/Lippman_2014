#include <iostream>

int main()
{
    int i = 9;
    int *p1 = &i;

    *p1 = *p1 * *p1; // i^2
    std::cout << *p1;
}