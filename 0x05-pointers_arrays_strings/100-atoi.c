#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: the string to convert.
 * Return: intger.
 */

int _atoi(char *s)
{
	int i = 0;
	int x = 1;
	int y = 0;
	unsigned int j = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			x *= -1;
		}
		while (s[i] >= '0' && s[i] <= '9')
		{
			y = 1;
			j = (j * 10) + (s[i] - '0');
			i++;
		}
		if (y == 1)
		{
			break;
		}
		i++;
	}
	j *= x;
	return (j);
}
