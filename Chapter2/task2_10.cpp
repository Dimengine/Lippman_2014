#include <iostream>

std::string global_str; //""
int global_int; //0

int main()
{
    int local_int; //uninitialized
    std::string local_str; //""

    std::cout << global_int << " " << global_str << " " << local_int << " " << local_str << std::endl;
}