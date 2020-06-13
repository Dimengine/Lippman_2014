#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec1{ 1, 4, 7, 8, 5, 5 };
	std::vector<int> vec2{ 1, 4, 7, 8, 5};
	
	std::vector<int>& lvec = vec1.size() >= vec2.size() ? vec2 : vec1;
	std::vector<int>& bvec = vec2.size() > vec1.size() ? vec2 : vec1;

	for (auto i = bvec.begin(), j = lvec.begin(); j != lvec.end(); ++i, ++j)
	{
		if (*i != *j)
		{
			std::cout << "The smaller vector is not a prefix of the larger one" << std::endl;
			return 0;
		}
	}
	std::cout << "The smaller vector is the prefix of the larger one" << std::endl;
}