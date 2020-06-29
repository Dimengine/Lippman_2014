#include <iostream>

void swapNumbers(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int a1, a2;
    std::cin >> a1 >> a2;
    swapNumbers(&a1, &a2);
    std::cout << a1 << " " << a2 << std::endl;
}