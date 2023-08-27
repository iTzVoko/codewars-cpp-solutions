/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */

#include <string>

std::string removeExclamationMarks(std::string str)
{
    int strLength = str.length();
    std::string result = "";

    for (int i = 0; i < strLength; i++)
    {
        if (str[i] != '!')
            result += str[i];
    }

    return result;
}
