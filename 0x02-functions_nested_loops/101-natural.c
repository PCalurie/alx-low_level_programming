#include <stdio.h>
/**
 * main - printing function
 * Return: Always 0
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;
	i = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
		sum++;
	}
	printf("%d\n", sum);
	return (0);
}
