#include <stdio.h>
#include <stdlib.h>
/**
 * main - minimum number of coins to make change for an amount of money.
 * @argv: arguments
 * @argc: number of arguments
 * Return: 0 success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = 0;
	int count;
	int x;
/* check that there is only one argument including the name of prg */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
/* convert the argument into an int */
	cents = atoi(argv[1]);
/* check that the amnt is positive */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
/* iterate over the num of coins used */
	for ( x = 0; x < 5; x++)
	{
		count = coins[x];
		num_coins += cents / count;
		cents %= count;
	}

	printf("%d\n", num_coins);

	return (0);
}
