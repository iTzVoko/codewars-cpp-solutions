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

	// Add the first letter and make it upper case
	result.push_back(std::toupper(name.front()));
	result.push_back('.');
	// Add the letter after the space index and make it upper case
	result.push_back(std::toupper(name[name.find(' ') + 1]));

	return result;
}
