#include <iostream>

int &get (int *arry, int index) { return arry[index]; }

int main()
{
    int ia[10];
    for (int i = 0; i != 10; ++i)
        get(ia, i) = i;
    
    for (const auto &el : ia)
        std::cout << el << std::endl;
}