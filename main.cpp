#include "./insertionSort.hpp"
#include "./linearSearch.hpp"
#include "./selectionSort.hpp"
#include "./mergeSort.hpp"

int main()
{
	std::vector<int> vec = {4, 3, 2, 10};
	// InsertionSort::sort(vec);
	// std::cout << LinearSearch::search(vec, 10) << std::endl;
	// SelectionSort::sort(vec);
    MergeSort::sort(vec);
    Utils::print(vec);
	return 0;
}