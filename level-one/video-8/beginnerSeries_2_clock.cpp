/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
int past(int h, int m, int s)
{

	return 1000 * (h * 60 * 60 + m * 60 + s);
	// return ((60 * h + m) * 60 + s) * 1000;
	// return (h * 60 * 60 * 1000) + (m * 60 * 1000) + (s * 1000);
}
