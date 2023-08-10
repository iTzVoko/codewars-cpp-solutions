/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 * Note: You can solve it using for loop too, of course.
 * Explanation: When count equals 0, the loop will stop, because 0 == false.
 */
#include <vector>

std::vector<int> invert(std::vector<int> values)
{
    std::size_t count = values.size();

    while (count--)
        values[count] *= -1;

    return values;
}
