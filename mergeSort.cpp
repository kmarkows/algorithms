#include "MergeSort.hpp"

void MergeSort::sort(std::vector<int> &vec)
{
	sort(vec, 0, vec.size() - 1);
	Utils::print(vec);
}

void MergeSort::sort(std::vector<int> &vec, const uint8_t begin, const uint8_t end)
{
	if (begin >= end)
	{
		return;
	}
	uint8_t mid = (begin + end) / 2;
	sort(vec, begin, mid);
	sort(vec, mid + 1, end);
	merge(vec, begin, mid, end);
}

void MergeSort::merge(std::vector<int> &vec, const uint8_t begin, const uint8_t mid, const uint8_t end)
{
	std::vector<int> leftSubArray{};
	std::vector<int> rightSubArray{};
	uint8_t leftSubArraySize = mid - begin + 1;
	uint8_t rightSubArraySize = end - mid;

	for (uint8_t i = 0; i < leftSubArraySize; i++)
	{
		leftSubArray.push_back(vec[begin + i]);
	}

	for (uint8_t j = 0; j < rightSubArraySize; j++)
	{
		rightSubArray.push_back(vec[mid + 1 + j]);
	}

	Utils::print(leftSubArray);
	Utils::print(rightSubArray);

	uint8_t leftSubArrayIndex = 0;
	uint8_t rightSubArrayIndex = 0;
	uint8_t mergedArrayIndex = begin;
	while (leftSubArrayIndex < leftSubArray.size() and rightSubArrayIndex < rightSubArray.size())
	{
		if (leftSubArray[leftSubArrayIndex] <= rightSubArray[rightSubArrayIndex])
		{
			vec[mergedArrayIndex] = leftSubArray[leftSubArrayIndex];
			leftSubArrayIndex++;
		}
		else
		{
			vec[mergedArrayIndex] = rightSubArray[rightSubArrayIndex];
			rightSubArrayIndex++;
		}
		mergedArrayIndex++;
	}

	while (leftSubArrayIndex < leftSubArray.size())
	{
		vec[mergedArrayIndex] = leftSubArray[leftSubArrayIndex];
		leftSubArrayIndex++;
		mergedArrayIndex++;
	}

	while (rightSubArrayIndex < rightSubArray.size())
	{
		vec[mergedArrayIndex] = rightSubArray[rightSubArrayIndex];
		rightSubArrayIndex++;
		mergedArrayIndex++;
	}
}