#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> scores {"F", "E", "D", "C", "B", "A", "A++"};
    int grade;
    std::string lettergrade;

    std::cin >> grade;

    lettergrade = grade < 50 ? scores[0] : scores[(grade - 40) / 10];
    lettergrade += (grade >= 50 && grade != 100) ? grade % 10 > 7 ? "+" : grade % 10 < 3 ? "-" : "" : "";

    std::cout << lettergrade << std::endl;
}