/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 * Note: The second solution:
 * 		 If condetion is true, it will give 1, if it's false, it will give 0
 */

int getRealFloor(int f)
{
	return (f <= 0 ? f : (f < 13 ? f - 1 : f - 2));
	// return f - ((f > 0) + (f > 13));
}
