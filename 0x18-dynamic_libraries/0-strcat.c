#include "main.h"
/**
 * _strcat - concantenates two strings
 * @dest: destination file
 * @src: source file
 * Return: pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
/* find the end of the dest file */
	while (dest[x] != '\0')
		x++;
/* append the src file to the end of the dest string */
	int a = 0;

	while (src[a] != '\0')
		dest[x + a] = src[a];
	a++;
/* add the null terminator to the end of the concatenated string */
	dest[x + a] = '\0';

	return (dest);
}
