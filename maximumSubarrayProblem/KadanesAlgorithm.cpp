#include "KadanesAlgorithm.hpp"

namespace maximumSubarrayProblem
{

void KadanesAlgorithm::find(std::vector<int>& vec)
{
    Utils::print(vec);
    std::vector<int> diff = findDiff(vec);
    Utils::print(diff);

    int maxSoFar = INT_MIN;
    int maxEndingHere = 0;
    uint8_t maximumSubarrayStart = 0;
	uint8_t maximumSubarrayEnd = 0;
    for (uint8_t i = 0; i < diff.size(); i++)
    {
        maxEndingHere += diff[i];
        if (maxSoFar < maxEndingHere)
        {
            maximumSubarrayEnd = i;
            maxSoFar = maxEndingHere;
        }
        if (maxEndingHere < 0)
        {
            maximumSubarrayStart = i;
            maxEndingHere = 0;
        } 
    }
    std::cout << "maximumSubarrayStart:" << (int)maximumSubarrayStart << " maximumSubarrayEnd:" << (int)maximumSubarrayEnd << std::endl;
    Utils::print(vec, maximumSubarrayStart + 1, maximumSubarrayEnd + 1, maxSoFar);
}

std::vector<int> KadanesAlgorithm::findDiff(std::vector<int>& vec)
{
    std::vector<int> diff{};
    for (uint8_t i = 0; i < vec.size() - 1; i++)
	{
		diff.push_back(vec[i + 1] - vec[i]);
	}
    return diff;
}

} // namespace maximumSubarrayProblem
