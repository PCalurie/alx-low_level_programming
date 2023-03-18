#include <stdio.h>

/**
 *main - print all combinations of three different digits
 *Return: Always 0 (Success)
 */

int main(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++) /*hundreds place*/
	{
		for (y = (x + 1); j <= '9'; j++) /*tens=100s+1*/
		{
			for (j = (y + 1); x <= '9';x++) /*ones*/
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');

				if (x != '7' || y != '8' || z != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
