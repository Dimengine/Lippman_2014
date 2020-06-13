#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> scores {"F", "E", "D", "C", "B", "A", "A++"};
    int grade;
    std::string lettergrade;

    std::cin >> grade;
    if (grade < 50)
        lettergrade = scores[0];
    else
    {
        lettergrade = scores[(grade - 40) / 10];
        if (grade != 100)
            if (grade % 10 > 7)
                lettergrade += "+";
            else if (grade % 10 < 3)
                lettergrade += "-";
    }
    std::cout << lettergrade << std::endl;
}