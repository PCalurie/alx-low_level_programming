#include "main.h"
/**
 * _islower - checks if a char is in lower case
 * @c: string to check
 * Return: 1 if lower  0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
