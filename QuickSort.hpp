#include "Utils.hpp"

class QuickSort
{
  public:
	static void sort(std::vector<int> &vec);

  private:
	static void sort(std::vector<int> &vec, const int8_t begin, const int8_t end);
	static int8_t partition(std::vector<int> &vec, const int8_t begin, const int8_t end);
};