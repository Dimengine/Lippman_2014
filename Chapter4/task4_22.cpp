#include <iostream>

int main()
{
    int grade;
    std::cin >> grade;

    std::cout << (grade > 90 ? "high pass\n" : grade > 75 ? "pass\n" : grade >= 60 ? "minimum pass\n" : "fail\n");
}