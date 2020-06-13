#include <iostream>

int main()
{
    int grade;
    std::cin >> grade;

    if (grade > 90)
        std::cout << "high pass\n";
    else if (grade > 75)
        std::cout << "pass\n";
    else if (grade >= 60)
        std::cout << "minimum pass\n";
    else std::cout << "fail\n";
}