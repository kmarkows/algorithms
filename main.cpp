#include "InsertionSort.hpp"
#include "LinearSearch.hpp"
#include "MergeSort.hpp"
#include "SelectionSort.hpp"
#include "BubbleSort.hpp"
#include "BinarySearch.hpp"

int main()
{
	std::vector<int> vec = {1, 4, 5, 7, 8, 10, 12};
	// std::cout << LinearSearch::search(vec, 10) << std::endl;
    std::cout << BinarySearch::search(vec, 10) << std::endl;
    // InsertionSort::sort(vec);
	// SelectionSort::sort(vec);
	// MergeSort::sort(vec);
    // BubbleSort::sort(vec);
	return 0;
}