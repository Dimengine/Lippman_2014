#include <iostream>
#include <vector>

inline int add(int a, int b)
{
    return a + b;
}

inline int substract(int a, int b)
{
    return a - b;
}

inline int multiply(int a, int b)
{
    return a * b;
}

inline int divide(int a, int b)
{
    try 
    {
        if (b == 0)
            throw std::runtime_error("Divide by 0!");
        return a / b;
    } 
    catch (std::runtime_error err) 
    {
        std::cerr << err.what() << std::endl;
        return -1;
    }
}

int main()
{
    int a, b;
    std::vector<int (*) (int, int)> vec;
    vec.push_back(add);
    vec.push_back(substract);
    vec.push_back(multiply);
    vec.push_back(divide);

    while(std::cin >> a >> b)
        for (auto &el : vec)
            std::cout << el(a, b) << std::endl;
}