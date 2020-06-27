#include <iostream>
int get_response()
{
    return 1;
}
int main()
{
    //a
    do
    {
        int v1, v2;
        std::cout << "Please enter two numbers to sum:";
        if (std::cin >> v1 >> v2)
            std::cout << "Sum is: " << v1 + v2 << std::endl;
    }
    while(std::cin);

    //b
    int ival = get_response();
    do {} while (ival);

    //c
    int ival;
    do
    {
        ival = get_response();
    } 
    while (ival);
}