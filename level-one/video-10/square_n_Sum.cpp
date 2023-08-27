/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */

#include <vector>

int square_sum(const std::vector<int> &numbers)
{
	int sum = 0;

	for (int number : numbers)
		sum += number * number;

	return sum;
}
