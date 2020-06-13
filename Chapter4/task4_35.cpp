#include <iostream>

int main()
{
    char cval = 5;
    int ival = 5;
    unsigned int ui = 5;
    float fval = 5.0;
    double dval = 5.0;
    
    cval = 'a' + 3; // char('a') -> int -> char
    fval = ui - ival * 1.0; // int(ival) -> double -> float, unsigned int(ui) -> double
    dval = ui * fval; // unsigned int(ui) -> float -> double
    cval = ival + fval + dval; //int(ival) -> float -> double -> char

    auto a = 'a' + 3;
    auto b = ui - ival * 1.0;
    auto c = ui * fval;
    auto d = ival + fval + dval;
}