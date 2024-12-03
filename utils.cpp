#include "./Utils.hpp"

void Utils::print(const std::vector<int> &vec)
{
	for (const int num : vec)
	{
		std::cout << num << " ";
	}
	std::cout << std::endl;
}

void Utils::swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}