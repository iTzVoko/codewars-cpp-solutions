/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
int simpleMultiplication(int a)
{
    return a * (8 + a % 2);
    // return a * (8 + (a & 1));
    // return a * (8 + (0xFFFFFFFF == (a | 0xFFFFFFFE)));
}
