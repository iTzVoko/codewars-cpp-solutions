/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */

#include <vector>

std::vector<int> between(int start, int end)
{
	std::vector<int> result;

	while (start <= end)
	{
		result.push_back(start);

		start++;
	}

	return result;
}
