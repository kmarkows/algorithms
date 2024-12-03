#pragma once

#include <iostream>
#include <stdint.h>
#include <vector>

class Utils
{
  public:
	static void print(const std::vector<int> &vec);
	static void print(const std::vector<int> &vec, const uint8_t subarrayStart, const uint8_t subarrayEnd,
					  const int maximumSum);
	static void swap(int &a, int &b);
};