#include <iostream>
#include <cstring>

int main()
{
    const char str1[] = {'H', 'e', 'y', '\0'};
    const char str2[] = {'H', 'e', 'y', '!', '\0'};
    const size_t size = strlen(str1) + strlen(str2) + 1;
    char str3[size];

    strcpy(str3, str1);
    strcat(str3, str2);

    std::cout << str3 << std::endl;
}