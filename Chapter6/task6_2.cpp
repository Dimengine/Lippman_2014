#include <iostream>
#include <string>

//a
std::string f()
{
    std::string s;
    s = "f";
    return s;
}

//b
void f2 (int i)
{
    std::cout << "f2 - " << i << std::endl;
}

//c
int calc(int v1, int v2)
{
    return v1 + v2;
}

//d
double square(double x) 
{
    return x * x;
}

int main()
{   
    std::cout << f() << std::endl;
    f2(12);
    std::cout << calc(12, 14) << std::endl;
    std::cout << square(3.42) << std::endl;
}