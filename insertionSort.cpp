#include "./insertionSort.hpp"

void InsertionSort::sort(std::vector<int> &vec)
{
	Utils::print(vec);
	for (int8_t i = 1; i < vec.size(); i++)
	{
		int key = vec[i];
		int8_t j = i - 1;
		while (j >= 0 and vec[j] > key)
		{
			vec[j + 1] = vec[j];
			j--;
		}
		vec[j + 1] = key;
		Utils::print(vec);
	}
}