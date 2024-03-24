#include "./utils.hpp"

class MergeSort
{
  public:
	static void sort(std::vector<int> &vec);

  private:
	static void sort(std::vector<int> &vec, const uint8_t begin, const uint8_t end);
	static void merge(std::vector<int> &vec, const uint8_t begin, const uint8_t mid, const uint8_t end);
};