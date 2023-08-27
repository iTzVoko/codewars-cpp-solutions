/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */

int mango(int quantity, int price)
{
    int freeMangoesCount = quantity / 3;
    int totalCost = (quantity - freeMangoesCount) * price;

    return totalCost;

    // One-liner solution
    // return (quantity - quantity / 3) * price;
}
