#include "main.h"
/**
 * _memset - fills the value of b bytes in s
 * @s: pointer to b
 * @b: value to be set
 * @n: number of bytes to be set for b
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	do {
		s[i] = b;
		i++;
	} while (i < n);
	return (s);
}
