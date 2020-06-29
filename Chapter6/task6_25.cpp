#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char* argv[])
{
    std::string str = strcat(argv[1], argv[2]);
    std::cout << str << std::endl;
}