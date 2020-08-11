#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main()
{
    std::vector<std::string> vec;
    std::string str;

    while (std::cin >> str)
        vec.push_back(str);

    for (auto &el : vec)
        for (auto &ch : el)
            ch = toupper(ch);
    
    int counter = 0;
    for (const auto &el : vec)
    {
        std::cout << el << " ";
        if(++counter == 8)
        {
            std::cout << std::endl;
            counter = 0;
        }
    }
}