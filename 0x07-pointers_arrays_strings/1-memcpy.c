#include "main.h"

/**
 * _memcpy - copies a memory area with a specified value from src to dest
 * @dest: destination of the copied values
 * @src: source of the values to copy
 * @n: number of bytes to be set to the value dest
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (n > 0)
	{
		unsigned int i = 0;

		do {
			dest[i] = src[i];
			i++;
		} while (i < n);

		return (dest);
	}
	return (dest);
}
