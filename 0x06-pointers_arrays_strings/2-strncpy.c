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
	int index = 0;
	int src_len = 0;

	while (src[index])/*copy characters from source increamenting index*/
		src_len++;

	for (index = 0; index < n && src[index] != '\0'; index++)/*copy src to dest*/
	{
		dest[index] = src[index];
	}

	for (index = src_len; index < n; index++)/*fill null-terminator*/
		dest[index] = '\n';

	return (dest);
}
