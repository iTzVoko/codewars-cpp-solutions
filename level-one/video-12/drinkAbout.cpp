/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */

#include <string>

std::string people_with_age_drink(int age)
{
	return std::string("drink ") + (age < 14 ? "toddy" : (age < 18 ? "coke" : (age < 21 ? "beer" : "whisky")));
}
