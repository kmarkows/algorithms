#include "./utils.hpp"

class MergeSort
{
  public:
	static void sort(std::vector<int> &vec);

  private:
	static void merge(std::vector<int> &vec);
};