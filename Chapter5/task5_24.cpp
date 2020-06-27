#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    if (b == 0)
        throw std::runtime_error("Divide by 0!");
    std::cout << "Result is " << a / b << std::endl;
}