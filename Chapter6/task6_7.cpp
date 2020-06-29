#include <iostream>

int func()
{
    static int cnt = 0;
    return cnt++;
}

int main()
{
    for (int i = 0; i < 10; ++i)
        std::cout << func() << " ";
    std::cout << std::endl;
}