#include "main.h"
/**
 * _memcpy - copys a memory area
 * @dest: destination file
 * @src: source file
 * @n: number of bytes to copy
 * Return: pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;
/* iterate over n bytes of mem */
	for (x = 0; x < n; x++)
/* copy the amount of  bytes from src to dest */
		dest[x] = src[x];

	return (dest);
}
