#include "../Utils.hpp"

namespace maximumSubarrayProblem
{

class DivideAndConquer
{
  public:
	static void find(std::vector<int> vec);

  private:
	static int find(std::vector<int> vec, uint8_t begin, uint8_t end);
	static int findCross(std::vector<int> vec, uint8_t begin, uint8_t mid, uint8_t end);
};

} // namespace maximumSubarrayProblem