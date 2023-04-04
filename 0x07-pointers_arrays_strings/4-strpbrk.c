#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function searches a string for any set bytes
 * @s: string to be searched
 * @accept: string with bytes to be matched
 * Return: pointer to bytes in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	do {
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	} while (*s);

	return (NULL);
}
