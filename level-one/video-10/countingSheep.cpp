/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 * Note: You can use "count" function in the "algorithm" header.
 */
#include <vector>

using namespace std;

int count_sheep(vector<bool> arr)
{
	int count = 0;

	for (bool isPresent : arr)
	{
		if (isPresent)
			count++;
	}

	return count;
}
