/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
int centuryFromYear(int year)
{
    return year / 100 + (year % 100 ? 1 : 0);
    // return (year + 99) / 100;
}
