#include <iostream>

int main()
{
    int a, b, max, min;

    std::cout << "Input two numbers, please: ";
    std::cin >> a >> b;

    max = a > b ? a : b;
    min = a <= b ? a : b;
    std::cout << min << " " << max;
}