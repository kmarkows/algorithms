#include "Utils.hpp"

void Utils::print(const std::vector<int> &vec)
{
	for (const int num : vec)
	{
		std::cout << num << " ";
	}
	std::cout << std::endl;
}

void Utils::print(const std::vector<int> &vec, const uint8_t subarrayStart, const uint8_t subarrayEnd,
				  const int maximumSum)
{
	for (uint8_t i = subarrayStart; i < subarrayEnd + 1; i++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl << "maximum price difference is: " << maximumSum << std::endl;
}