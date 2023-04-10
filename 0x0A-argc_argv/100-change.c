#include <stdio.h>
#include <stdlib.h>
/**
 * main - minimum number of coins to make change for an amount of money.
 * @argv: arguments
 * @argc: number of arguments
 * Return: 0 success, 1 otherwise
 */
int (int argc, char *argv[])
{
	int amnt;
	int coins [] = {25, 10, 5, 2, 1};
	int num_coins, count, x;
/* check that there is only one argument including the name of prg */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
/* convert the argument into an int */
	amnt = atoi(argv[1]);
/* check that the amnt is positive */
	if (amnt < 0)
	{
		printf("0\n");
		return (0);
/* initialize a counter for the num of coins used */
	num_coins = sizeof(coins) / sizeof(coins[0]);
	count = 0;
/* iterate over the num of coins used */

	for (x = 0; x < 5; x++)
	{
		while (amnt > coins[x])
		{
/* substract the coin value from the amnt and increament the counter */
			amnt -= coins[x];
		count++;
		}
	}

	printf("%d\n", count);

	return (0);
}
