#include "HeapSort.hpp"
#include "Utils.hpp"

void HeapSort::sort(std::vector<int> &vec)
{
	Utils::print(vec);
	buildMaxHeap(vec);
	for (int8_t i = vec.size() - 1; i > 0; i--)
	{
		Utils::swap(vec[0], vec[i]);
		maxHeapify(vec, 0, i);
	}
	Utils::print(vec);
}

void HeapSort::buildMaxHeap(std::vector<int> &vec)
{
	for (int8_t i = (vec.size() - 1) / 2; i >= 0; i--)
	{
		maxHeapify(vec, i, vec.size());
	}
}

void HeapSort::maxHeapify(std::vector<int> &vec, const uint8_t parent, const uint8_t end)
{
	uint8_t largest = parent;
	uint8_t left = parent * 2 + 1;
	uint8_t right = parent * 2 + 2;
	if (left < end and vec[left] > vec[largest])
	{
		largest = left;
	}
	if (right < end and vec[right] > vec[largest])
	{
		largest = right;
	}
	if (largest != parent)
	{
		Utils::swap(vec[largest], vec[parent]);
		maxHeapify(vec, largest, end);
	}
}
