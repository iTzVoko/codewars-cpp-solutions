/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */

#include <vector>
#include <string>

bool check(const std::vector<std::string> &seq, const std::string &elem)
{
	bool is_found = false;

	for (const std::string &value : seq)
	{
		if (value == elem)
			is_found = true;
	}

	return is_found;
}
