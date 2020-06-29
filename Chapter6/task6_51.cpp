#include <iostream>

void f()
{
    std::cout << "f() is called" << std::endl;
}

void f(int a)
{
    std::cout << "f(int) is called" << std::endl;
}

void f(int a, int b)
{
    std::cout << "f(int, int) is called" << std::endl;
}

void f(double a, double b = 3.14)
{
    std::cout << "f(double, double) is called" << std::endl;
}

int main()
{
    //f(2.56, 42); //illegal
    f(42);
    f(42, 0);
    f(2.56, 3.14);
}