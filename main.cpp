#include "InsertionSort.hpp"
#include "LinearSearch.hpp"
#include "MergeSort.hpp"
#include "SelectionSort.hpp"
#include "BubbleSort.hpp"

int main()
{
	std::vector<int> vec = {5, 3, 8, 4, 6};
	// InsertionSort::sort(vec);
	// std::cout << LinearSearch::search(vec, 10) << std::endl;
	// SelectionSort::sort(vec);
	// MergeSort::sort(vec);
    BubbleSort::sort(vec);
	// Utils::print(vec);
	return 0;
}