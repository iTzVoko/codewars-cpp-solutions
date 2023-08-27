/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */

int getRealFloor(int f)
{
	return (f <= 0 ? f : (f < 13 ? f - 1 : f - 2));
}
