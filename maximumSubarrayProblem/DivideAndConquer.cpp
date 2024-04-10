#include "DivideAndConquer.hpp"
#include <algorithm>

namespace maximumSubarrayProblem
{

void DivideAndConquer::find(std::vector<int> vec)
{
	Utils::print(vec);
	std::vector<int> diff = findDiff(vec);
	for (uint8_t i = 0; i < vec.size() - 1; i++)
	Utils::print(diff);
	std::cout << find(diff, 0, diff.size() - 1) << std::endl;
}

std::vector<int> DivideAndConquer::findDiff(std::vector<int>& vec)
{
    std::vector<int> diff{};
    for (uint8_t i = 0; i < vec.size() - 1; i++)
	{
		diff.push_back(vec[i + 1] - vec[i]);
	}
    return diff;
}

int DivideAndConquer::find(std::vector<int> vec, uint8_t begin, uint8_t end)
{
	std::cout << "begin:" << (int)begin << " end:" << (int)end << std::endl;
	if (begin == end)
	{
		return vec[begin];
	}
	uint8_t mid = (begin + end) / 2;
	return std::max({find(vec, begin, mid), find(vec, mid + 1, end), findCross(vec, begin, mid, end)});
}

int DivideAndConquer::findCross(std::vector<int> vec, uint8_t begin, uint8_t mid, uint8_t end)
{
	int beginSum = INT_MIN;
	int sum = 0;
	for (int8_t i = mid; i >= begin; i--)
	{
		sum += vec[i];
		if (sum > beginSum)
		{
			beginSum = sum;
		}
	}

	int endSum = INT_MIN;
	sum = 0;
	for (int8_t i = mid + 1; i <= end; i++)
	{
		sum += vec[i];
		if (sum > endSum)
		{
			endSum = sum;
		}
	}
	std::cout << "findCross " << "begin:" << (int)begin << " end:" << (int)end << std::endl;
	std::cout << std::max({beginSum + endSum, beginSum, endSum}) << std::endl;
	return std::max({beginSum + endSum, beginSum, endSum});
}

} // namespace maximumSubarrayProblem