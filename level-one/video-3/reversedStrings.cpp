/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 * Note: You can also use reverse() function by including <algorithm> header.
 */
#include <string>
using namespace std;

string reverseString(string str)
{
    string reversedString = "";

    for (int i = str.length() - 1; i >= 0; i--)
        reversedString += str[i];

    return reversedString;
}
