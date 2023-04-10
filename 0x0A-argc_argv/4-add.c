#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints sum
 * @argv: arguments
 * @argc: number of arguments
 * Return: 0 success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int x, num, sum;

	for (x = 0; x < argc; x++)
	{
		char *n = argv[x];

		while (*n)
		{
			if (!isdigit(*n))
			{
				printf("Error\n")
				return (1);
			}
			n++;
		}

		num = atoi(argv[x]);

		if (num > 0)
		{
			sum = num + num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
