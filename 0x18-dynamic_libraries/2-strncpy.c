#include "main.h"
/**
 * _strncpy - copys a string from source file to destination
 * @dest: sdestination file
 * @src: source file
 * @n: number of bytes to copy
 * Return: pointer to destination file
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
/* copy upto n char of the dest file */
	while (x < n && src[x] != '\0')
	dest[x] = src[x];
	x++;
/* if src is shorter than n, fill the remaining with null char */
	while (x < n)
	x++;

	dest[x] = '\0';

	return (dest);
}
