#include <iostream>

int get_value()
{
    return 10;
}

int main()
{
    //a
    int ival1 = 5, ival2 = 4;

    if(ival1 != ival2)
        ival1 = ival2;
    else 
        ival1 = ival2 = 0;
    std::cout << ival1 << " " << ival2 << std::endl;

    //b
    int ival = 4, minval = 5, occurs = 0;

    if (ival < minval)
    {
        minval = ival;
        occurs = 1;
    }
    std::cout << ival << " " << minval << " " << occurs << std::endl;

    //c
    int ival3 = get_value();
    if (ival3)
        std::cout << "ival = " << ival3 << std::endl;
    if (!ival3)
        std::cout << "ival = 0\n";

    //d
    int ival4 = 0;
    if(ival4 == 0)
        ival4 = get_value();
    std::cout << ival4 << std::endl;
}