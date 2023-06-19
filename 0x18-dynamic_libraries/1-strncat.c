#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination file
 * @src: source file
 * @n: number of bytes to be copied
 * Return: pointer to the destn file
 */
char *_strncat(char *dest, char *src, int n)
{
/* copy the start of dest file to a variable pointer */
	char *p = dest;
/* move p to the end of dest file */
	while (*p != '\0')
		p++;
/* copy char to dest file in n bytes */
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		*(p++) = src[a];

	*p = '\0';

	return (dest);
}
