/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 * Note: '0' is a character, and its ASCII value is 48, and '1' is 49, etc.
 */
#include <string>

int string_to_number(const std::string &s)
{
	int digitsCount = s.length();
	int result = 0;

	for (int i = 0; i < digitsCount; i++)
	{
		if (s[i] == '-')
			continue;

		// ex.     '7' (55) - '0' (48) = 7
		int digit = s[i] 	- '0';

		result = result * 10 + digit;
	}

	if (s[0] == '-')
		result *= -1;

	return result;
}
