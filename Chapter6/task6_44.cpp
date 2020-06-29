#include <iostream>
#include <string>

inline bool isShorter (const std::string &s1, const std::string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    std::string str1 = "First";
    std::string str2 = "Second";

    std::cout << isShorter(str1, str2) << std::endl;
}