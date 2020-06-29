#include <iostream>
#include <vector>

void recursiveVectorPrint (const std::vector<int>::iterator beg, const std::vector<int>::iterator end)
{
    if (beg != end)
    {
        #ifndef NDEBUG
        std::cout << "In function " << __func__ << " vector size = "  << end - beg 
                << ", compiled at " << __TIME__ << std::endl;
        #endif
        std::cout << "Element: " << *beg << std::endl;
        recursiveVectorPrint(beg + 1, end);
    }
}

int main()
{
    std::vector<int> vec {1, 2, 3, 8};
    recursiveVectorPrint(vec.begin(), vec.end());
}