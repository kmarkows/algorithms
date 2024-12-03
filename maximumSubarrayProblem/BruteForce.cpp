#include "BruteForce.hpp"
#include "../Utils.hpp"

namespace maximumSubarrayProblem
{

void BruteForce::find(std::vector<int> &vec)
{
	Utils::print(vec);
	int maximumSum = vec[1] - vec[0];
	uint8_t maximumSubarrayStart = 0;
	uint8_t maximumSubarrayEnd = 1;
	for (uint8_t i = 0; i < vec.size() - 1; i++)
	{
		for (uint8_t j = i + 1; j < vec.size(); j++)
		{
			if ((vec[j] - vec[i]) > maximumSum)
			{
				maximumSubarrayStart = i;
				maximumSubarrayEnd = j;
				maximumSum = vec[j] - vec[i];
			}
		}
	}
	// Utils::print(vec, maximumSubarrayStart, maximumSubarrayEnd, maximumSum);
}

} // namespace maximumSubarrayProblem