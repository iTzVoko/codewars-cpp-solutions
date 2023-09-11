/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */

#include <string>

std::string rps(const std::string &p1, const std::string &p2)
{
	if (p1 == p2)
		return "Draw!";

	else if (  (p1[0] == 's' && p2[0] == 'p')
	        || (p1[0] == 'p' && p2[0] == 'r')
		  	|| (p1[0] == 'r' && p2[0] == 's'))
		return "Player 1 won!";

	else
		return "Player 2 won!";
}
