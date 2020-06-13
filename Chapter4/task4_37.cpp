#include <iostream>
#include <string>

int main()
{
    int i;
    double d;
    const std::string *ps;
    char *pc;
    void *pv;

    pv = const_cast<std::string*> (ps); //pv = (void*)ps
    i = static_cast<int> (*pc); //i = int(*pc)
    pv = static_cast<void*> (&d); //pv = &d
    pc = static_cast<char*> (pv); //pc = (char*)pv
}