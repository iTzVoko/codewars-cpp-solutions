/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 * Note: We can do the same using std::count function from algorithm the header.
 */
#include <string>

unsigned int strCount(const std::string &word, char letter)
{
	int count = 0;

	for (char currentLetter : word)
	{
		if (currentLetter == letter)
			count++;
	}

	return count;
}
