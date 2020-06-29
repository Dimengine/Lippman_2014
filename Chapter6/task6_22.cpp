#include <iostream>

void swapPtr(int **first, int **second)
{
    int *temp = *first;
    *first = *second;
    *second = temp;
}

int main()
{
    int a = 10, b = 20;
    int *pa = &a, *pb = &b; 
    std::cout << pa << "-" << *pa << " " << pb  << "-" << *pb << std::endl;
    swapPtr(&pa, &pb);
    std::cout << pa << "-" << *pa << " " << pb  << "-" << *pb << std::endl;
}