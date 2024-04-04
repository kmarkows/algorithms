#include "LinearSearch.hpp"

int LinearSearch::search(std::vector<int> &vec, int target)
{
	Utils::print(vec);
	for (uint8_t i = 0; i < vec.size(); i++)
	{
		if (vec[i] == target)
		{
			return i;
		}
	}
	return -1;
}