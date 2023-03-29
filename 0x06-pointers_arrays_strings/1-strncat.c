#include "main.h"
/**
 * *_strncat - concantenates two strings
 * @src: source string
 * @dest: destiny string
 * @n: maximum number of characters to append
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{

	int index = 0, dest_len = 0;

	while (dest[index++])/* loop interates inside dest string until null*/
	dest_len++;
	for (index = 0; src[index] && index < n; index++)/* appended char < n*/
	dest[dest_len++] = src[index];
	return (dest);

}
