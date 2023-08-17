/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <vector>

int grow(std::vector<int> nums)
{
	int product = 1;

	for (int num : nums)
		product *= num;

	return product;
}
