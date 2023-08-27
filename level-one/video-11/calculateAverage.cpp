/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */

#include <vector>

double calcAverage(const std::vector<int> &values)
{
	float result = 0;

	for (int num : values)
		result += num;

	return result / values.size();
}
