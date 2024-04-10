#include "./maximumSubarrayProblem/BruteForce.hpp"
#include "./maximumSubarrayProblem/DivideAndConquer.hpp"
#include "./maximumSubarrayProblem/KadanesAlgorithm.hpp"
#include "BinarySearch.hpp"
#include "BubbleSort.hpp"
#include "InsertionSort.hpp"
#include "LinearSearch.hpp"
#include "MergeSort.hpp"
#include "QuickSort.hpp"
#include "SelectionSort.hpp"

int main()
{
	std::vector<int> vec = {100, 113, 110, 85, 105, 102, 86, 63, 81, 101, 94, 106, 101, 79, 94, 90, 97};
	// std::cout << LinearSearch::search(vec, 10) << std::endl;
	// std::cout << BinarySearch::search(vec, 10) << std::endl;
	// InsertionSort::sort(vec);
	// SelectionSort::sort(vec);
	// BubbleSort::sort(vec);
	// MergeSort::sort(vec);
	// QuickSort::sort(vec);
	// maximumSubarrayProblem::BruteForce::find(vec);
    // maximumSubarrayProblem::DivideAndConquer::find(vec);
    maximumSubarrayProblem::KadanesAlgorithm::find(vec);

	return 0;
}