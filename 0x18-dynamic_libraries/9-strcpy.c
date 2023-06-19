#include "main.h"
/**
 * _strcpy - copys a string
 * @dest: destination file
 * @src: source file
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (*(src + n) != '\0')
		*(dest + n) = *(src + n);
	n++;

	*(dest + n) = '\0';

	return (dest);
}
