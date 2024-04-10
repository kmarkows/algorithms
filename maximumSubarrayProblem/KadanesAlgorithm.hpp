#include "../Utils.hpp"

namespace maximumSubarrayProblem
{

class KadanesAlgorithm
{
public:
    static void find(std::vector<int>& vec);

private:
    static std::vector<int> findDiff(std::vector<int>& vec); 
};

} // namespace maximumSubarrayProblem