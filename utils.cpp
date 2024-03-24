#include "./utils.hpp"

void Utils::print(std::vector<int> &vec)
{
	for (const int num : vec)
	{
		std::cout << num << " ";
	}
	std::cout << std::endl;
}