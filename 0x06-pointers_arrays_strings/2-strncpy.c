#include "main.h"
/**
 * _strncpy - copy at most n characters from source string
 * @src: source string
 * @dest: destination string
 * @n: number of characters to be appended
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
