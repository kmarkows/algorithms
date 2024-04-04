#include "InsertionSort.hpp"
#include "LinearSearch.hpp"
#include "MergeSort.hpp"
#include "SelectionSort.hpp"

int main()
{
	std::vector<int> vec = {38, 27, 43, 10};
	// InsertionSort::sort(vec);
	// std::cout << LinearSearch::search(vec, 10) << std::endl;
	// SelectionSort::sort(vec);
	MergeSort::sort(vec);
	// Utils::print(vec);
	return 0;
}