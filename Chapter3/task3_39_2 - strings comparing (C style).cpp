#include <iostream>
#include <cstring>

int main()
{
    //C style
    const char str1[] = {'H', 'e', 'y', '\0'};
    const char str2[] = {'H', 'e', 'y', '!', '\0'};
    int cmp = strcmp(str1, str2);
    std::cout << (cmp == 0 ? "str1 == str2\n" : cmp > 0 ? "str1 > str2\n" : "str2 > str1\n");
}