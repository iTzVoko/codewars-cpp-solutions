/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
bool isDivisible(int n, int x, int y)
{
    return !(n % x || n % y);
    // return n % x == 0 && n % y == 0;
    // return !(n % x + n % y);
    // return !(n % x | n % y);
}
