/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 * Note: You can use pop_back in its own line too: str.popback()
 */
#include <string>

using namespace std;

string sliceString(string str)
{
	str.erase(0, 1).pop_back();

	return str;
}
