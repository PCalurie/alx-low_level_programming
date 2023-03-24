#include "main.h"
/**
 * more_numbers - prints 0 to 14, 10 times
 * Return: returns no value
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
				_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
