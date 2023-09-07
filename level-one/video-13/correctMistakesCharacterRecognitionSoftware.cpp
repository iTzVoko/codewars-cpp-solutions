/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */

#include <string>

std::string correct(std::string str)
{
	for (char &currentChar : str)
	{
		if (currentChar == '5')
			currentChar = 'S';
		else if (currentChar == '0')
			currentChar = 'O';
		else if (currentChar == '1')
			currentChar = 'I';
	}

	return str;
}
