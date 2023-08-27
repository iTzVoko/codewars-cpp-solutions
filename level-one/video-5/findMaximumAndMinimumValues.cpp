/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */

#include <vector>

using namespace std;

int min(vector<int> list)
{
    int listSize = list.size();
    int minimumNumber = list[0];

    for (int i = 0; i < listSize; i++)
    {
        if (list[i] < minimumNumber)
            minimumNumber = list[i];
    }

    return minimumNumber;
}

int max(vector<int> list)
{
    int listSize = list.size();
    int maximumNumber = list[0];

    for (int i = 0; i < listSize; i++)
    {
        if (list[i] > maximumNumber)
            maximumNumber = list[i];
    }

    return maximumNumber;
}
