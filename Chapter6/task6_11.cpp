#include <iostream>
#include <string>

void reset(std::string &str)
{
    str = "";
}

int main()
{
    std::string text = "Some text";
    std::cout << text;
    reset(text);
    std::cout << text << std::endl;    
}