#include "./utils.hpp"

class MergeSort
{
  public:
	static void sort(std::vector<int> &vec, const uint8_t begin, const uint8_t end);

  private:
	static void merge(std::vector<int> &vec, const uint8_t begin, const uint8_t end, const uint8_t mid);
};