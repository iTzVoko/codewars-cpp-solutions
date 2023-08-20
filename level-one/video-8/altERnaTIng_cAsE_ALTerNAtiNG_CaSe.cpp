/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <string>

std::string to_alternating_case(const std::string &str)
{
	std::string result = "";

	for (char c : str)
		result += (std::islower(c) ? std::toupper(c) : std::tolower(c));

	return result;
}
