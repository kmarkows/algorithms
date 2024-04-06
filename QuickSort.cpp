#include "QuickSort.hpp"

void QuickSort::sort(std::vector<int> &vec)
{
	Utils::print(vec);
	sort(vec, 0, vec.size() - 1);
	Utils::print(vec);
}

void QuickSort::sort(std::vector<int> &vec, const int8_t begin, const int8_t end)
{
	if (begin < end)
	{
		int8_t pivotIndex = partition(vec, begin, end);
		sort(vec, begin, pivotIndex - 1);
		sort(vec, pivotIndex + 1, end);
	}
}

int8_t QuickSort::partition(std::vector<int> &vec, const int8_t begin, const int8_t end)
{
	int pivot = vec[end];
	int8_t i = begin - 1;
	for (int8_t j = begin; j < end; j++)
	{
		if (vec[j] < pivot)
		{
			i++;
			int temp = vec[j];
			vec[j] = vec[i];
			vec[i] = temp;
		}
	}
	vec[end] = vec[i + 1];
	vec[i + 1] = pivot;
	return i + 1;
}