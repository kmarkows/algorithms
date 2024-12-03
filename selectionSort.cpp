#include "./SelectionSort.hpp"

void SelectionSort::sort(std::vector<int> &vec)
{
	Utils::print(vec);
	for (uint8_t i = 0; i < vec.size(); i++)
	{
		int smallestCurrentNumber = vec[i];
		uint8_t smallestCurrentNumberIndex = i;
		for (uint8_t j = i + 1; j < vec.size(); j++)
		{
			if (smallestCurrentNumber > vec[j])
			{
				smallestCurrentNumber = vec[j];
				smallestCurrentNumberIndex = j;
			}
		}
		vec[smallestCurrentNumberIndex] = vec[i];
		vec[i] = smallestCurrentNumber;
		Utils::print(vec);
	}
}