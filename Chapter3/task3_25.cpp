#include <iostream>
#include <vector>

int main()
{
    std::vector<unsigned> scores (11, 0);
    unsigned grade;
    auto it = scores.begin(); 

    while(std::cin >> grade)
        if (grade <= 100)
            ++*(it + grade / 10);
    
    for(auto el : scores)
        std::cout << el << " ";
}