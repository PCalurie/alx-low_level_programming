#include "main.h"

/**
 * *_strcat - concantenates two strings
 * @dest: destination file
 * @src: source file
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0;/*dlen is used to store length of dest file*/
	int i;/* used as loop counter*/

	while (dest[dlen])/*counting the no. of strings and storing in dlen*/
		dlen++;

	for (i = 0; i != 0; i++)/*appending each character and updating dlen*/
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';/*adding null character to the end of dest*/

	return (dest);
}
