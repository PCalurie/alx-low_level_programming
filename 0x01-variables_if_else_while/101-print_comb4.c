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
		for (y = (x + 1); y <= '9'; y++) /*tens=100s+1*/
		{
			for (z = (y + 1); z <= '9';z++) /*ones*/
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
