/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 * Note: You can use for-loop way normally.
 * 		 While-loop saves you memory by not defining unneeded variables (int i).
 */
#include <string>

std::string repeat_str(size_t repeat, const std::string &str)
{
	std::string result = "";

	while (repeat--)
		result += str;

	return result;
}
