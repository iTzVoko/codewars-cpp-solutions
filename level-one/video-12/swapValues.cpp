/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */

#include <utility>

std::pair<int, int> swap_values(std::pair<int, int> values)
{
	std::swap(values.first, values.second);

	// int tempValue = values.first;
	// values.first = values.second;
	// values.second = tempValue;

	return values;
}
