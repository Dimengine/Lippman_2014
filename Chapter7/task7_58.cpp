#include <vector>

// example.h
class Example 
{
public:
    static double rate;
    static const int vecSize = 20;
    static std::vector<double> vec;
};

// example.C
//#include "example.h"
double Example::rate = 6.5;
std::vector<double> Example::vec(vecSize);