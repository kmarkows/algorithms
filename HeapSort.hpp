#pragma once

#include <vector>

class HeapSort
{
  public:
	static void sort(std::vector<int> &vec);

  private:
	static void buildMaxHeap(std::vector<int> &vec);
	static void maxHeapify(std::vector<int> &vec, const uint8_t parent, const uint8_t end);
};