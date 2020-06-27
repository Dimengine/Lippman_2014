#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec {4, 64, 23, 43};
    std::vector<int>::size_type cnt = ivec.size();

    for(std::vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
        ivec[ix] = cnt;

    for(const auto &el : ivec)
        std::cout << el << " ";
    std::cout << std::endl;
}