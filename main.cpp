#include "BinarySearch.hpp"
#include "BubbleSort.hpp"
#include "InsertionSort.hpp"
#include "LinearSearch.hpp"
#include "MergeSort.hpp"
#include "QuickSort.hpp"
#include "SelectionSort.hpp"

int main()
{
	std::vector<int> vec = {5, 3, 8, 7, 0, 8, 7, 3};
	// std::cout << LinearSearch::search(vec, 10) << std::endl;
	// std::cout << BinarySearch::search(vec, 10) << std::endl;
	// InsertionSort::sort(vec);
	// SelectionSort::sort(vec);
	// MergeSort::sort(vec);
	// BubbleSort::sort(vec);
	QuickSort::sort(vec);
	return 0;
}