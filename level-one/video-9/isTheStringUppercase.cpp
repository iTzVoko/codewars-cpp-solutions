/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 * Note: It can be easily solved too using "std::none_of" function in the
 * 		 "algorithm" header.
 */
#include <string>

bool is_uppercase(const std::string &s)
{
	bool result = true;

	for (char currentChar : s)
	{
		if (std::islower(currentChar))
			result = false;
	}

	return result;
}
