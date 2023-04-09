#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: lenth
 */
int _strlen(char *s)
{
/* initialize the length variable to 0 */
	int lenth = 0;

	while (*s != '\0')
		lenth++;
	s++;

	return (lenth);
}
