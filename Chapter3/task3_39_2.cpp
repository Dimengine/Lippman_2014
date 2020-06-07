#include <iostream>
#include <cstring>

int main()
{
    //C style
    const char str1[] = {'H', 'e', 'y', '\0'};
    const char str2[] = {'H', 'e', 'y', '!', '\0'};
    int cmp = strcmp(str1, str2);
    cmp == 0 ? std::cout << "str1 == str2\n" : cmp > 0 ? std::cout << "str1 > str2\n" : std::cout << "str2 > str1\n";
}