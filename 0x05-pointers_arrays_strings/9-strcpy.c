#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src.
 * @dest: destination value.
 * @src: the source.
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src)
	{
		*p++ = src++;
	}
	*p = '\0';
	return (dest);
}
