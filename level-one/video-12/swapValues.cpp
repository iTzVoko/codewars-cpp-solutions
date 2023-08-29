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

	return values;

	// int tempValue = values.first;
	// values.first  = values.second;
	// values.second = tempValue;

	// Without temp variable
	// Arithmetic way (+ and -)
	// values.first = values.first + values.second;
	// values.second = values.first - values.second;
	// values.first = values.first - values.second;

	// Shorter
	// values.first += values.second;
	// values.second = values.first - values.second;
	// values.first -= values.second;

	// Shortest
	// values.first += values.second;
	// values.first -= values.second = values.first - values.second;

	// return values;
}
