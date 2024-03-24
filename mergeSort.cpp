#include "./mergeSort.hpp"

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

void MergeSort::merge(std::vector<int> &vec, const uint8_t begin, const uint8_t end, const uint8_t mid)
{
}