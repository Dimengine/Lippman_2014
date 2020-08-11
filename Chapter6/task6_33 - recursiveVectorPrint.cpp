#include <iostream>
#include <vector>

void recursiveVectorPrint (const std::vector<int>::iterator beg, const std::vector<int>::iterator end)
{
    if (beg != end)
    {
        std::cout << *beg << std::endl;
        recursiveVectorPrint(beg + 1, end);
    }
}

int main()
{
    std::vector<int> vec {1, 2, 3};
    recursiveVectorPrint(vec.begin(), vec.end());
}