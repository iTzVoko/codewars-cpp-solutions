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
		switch (currentChar)
		{
		case '5':
			currentChar = 'S';
			break;
		case '0':
			currentChar = 'O';
			break;
		case '1':
			currentChar = 'I';
			break;
		}
	}

	return str;
}
