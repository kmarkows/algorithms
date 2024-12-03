#include "./maximumSubarrayProblem/BruteForce.hpp"
#include "./maximumSubarrayProblem/DivideAndConquer.hpp"
#include "./maximumSubarrayProblem/KadanesAlgorithm.hpp"
#include "BinarySearch.hpp"
#include "BubbleSort.hpp"
#include "HeapSort.hpp"
#include "InsertionSort.hpp"
#include "LinearSearch.hpp"
#include "MergeSort.hpp"
#include "QuickSort.hpp"
#include "SelectionSort.hpp"

int main()
{
	std::vector<int> vec = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
	// std::cout << LinearSearch::search(vec, 10) << std::endl;
	// std::cout << BinarySearch::search(vec, 10) << std::endl;
	// InsertionSort::sort(vec);
	// SelectionSort::sort(vec);
	// BubbleSort::sort(vec);
	// MergeSort::sort(vec);
	// QuickSort::sort(vec);
	HeapSort::sort(vec);
	// maximumSubarrayProblem::BruteForce::find(vec);
	// maximumSubarrayProblem::DivideAndConquer::find(vec);
	// maximumSubarrayProblem::KadanesAlgorithm::find(vec);

	return 0;
}