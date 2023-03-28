#include "main.h"

/**
 * _atoi - Converts a string to an integer
 *
 * @s: Pointer to the string to be converted
 *
 * Return: Integer
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = -sign;
		else if (s[i] >= '0' && s[i] <= '9')
			result = result * 10 + (s[i] - '0');
		else if (result > 0)
			break;
	}

	return (result * sign);
}
