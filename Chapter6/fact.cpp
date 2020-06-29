#include "Chapter6.h"

int fact(int a)
{
    if (a > 1)
        return a * fact(a - 1);
    else return 1;
}