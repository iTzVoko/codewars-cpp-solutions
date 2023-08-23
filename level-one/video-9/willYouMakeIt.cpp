/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 * Note: "cstdint" header is used to access uintX_t data types.
 */
#include <cstdint>

bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left)
{
	return (mpg * fuel_left >= distance_to_pump);
}
