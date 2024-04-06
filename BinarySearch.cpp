#include "BinarySearch.hpp"

int BinarySearch::search(std::vector<int> &vec, int target)
{
	uint8_t left = 0;
	uint8_t right = vec.size() - 1;
	while (left <= right)
	{
		uint8_t mid = (left + right) / 2;
		std::cout << " left:" << (int)left << " mid:" << (int)mid << " right:" << (int)right << std::endl;
		if (vec[mid] == target)
		{
			return mid;
		}
		else if (vec[mid] < target)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return -1;
}