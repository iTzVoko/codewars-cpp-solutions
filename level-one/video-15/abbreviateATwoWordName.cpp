/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */

#include <string>

std::string abbrevName(std::string name)
{
	std::string result = "";

	result.push_back(std::toupper(name.front()));
	result.push_back('.');
	result.push_back(std::toupper(name[name.find(' ') + 1]));

	return result;
}
