/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */

#include <utility>

std::pair<int, int> swap_values(std::pair<int, int> values)
{
	std::swap(values.first, values.second);

	return values;

	// int tempValue = values.first;
	// values.first  = values.second;
	// values.second = tempValue;

	// Without temp variable, let's say that x = 10 and y = 20
	// Arithmetic way (+ and -)
	// values.first = values.first + values.second;
	// values.second = values.first - values.second;
	// values.first = values.first - values.second;

	// * Shorter
	// values.first += values.second;
	// values.second = values.first - values.second;
	// values.first -= values.second;

	// * Shortest
	// values.first += values.second;
	// values.first -= values.second = values.first - values.second;

	// * XOR Swap Algorithm (from Wikipedia, it's a bit manipulation)
	// If bits are different (like 1 and 0) it will put 1, if not, it will put 0
	// 01010 (10) ^ 10100 (20) = 11110 (30) (first)
	// 11110 (30) ^ 10100 (20) = 01010 (10) (second)
	// 11110 (30) ^ 01010 (10) = 10100 (20) (first)

	// values.first  = values.first ^ values.second;
	// values.second = values.first ^ values.second;
	// values.first  = values.first ^ values.second;

	// * Shorter
	// values.first ^= values.second;
	// values.second ^= values.first;
	// values.first ^= values.second;

	// * Shortest, One-liner solution
	// values.first ^= values.second ^= values.first ^= values.second;

	// phew... finally :o

	// return values;
}
