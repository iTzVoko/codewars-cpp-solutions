/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */

#include <string>

std::string makeUpperCase(const std::string &input_str)
{
	std::string result = "";

	for (const char &letter : input_str)
	{
		result += std::toupper(letter);
	}

	return result;
}
