/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <string>

std::string no_space(const std::string &x)
{
	std::string result = "";

	for (char currentChar : x)
		if (currentChar != ' ')
			result += currentChar;

	return result;
}
