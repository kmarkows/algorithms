#include "BubbleSort.hpp"

void BubbleSort::sort(std::vector<int> &vec)
{
	Utils::print(vec);
	bool sorted{false};
	while (not sorted)
	{
		Utils::print(vec);
		bool swapped{false};
		for (uint8_t i = 0; i < vec.size() - 1; i++)
		{
			if (vec[i] > vec[i + 1])
			{
				int temp = vec[i];
				vec[i] = vec[i + 1];
				vec[i + 1] = temp;
				swapped = true;
			}
		}
		sorted = not swapped;
	}
	Utils::print(vec);
}