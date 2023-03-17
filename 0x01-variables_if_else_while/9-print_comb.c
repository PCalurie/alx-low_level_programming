#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
	putchar(n);
		if (n < '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			break;
		}
	}
	putchar('\n');

return (0);
}
