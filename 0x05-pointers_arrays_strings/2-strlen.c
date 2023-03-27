#include "main.h"
/**
 * _strlen - prints the value of the string
 * @s: the string
 * Return: the value of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	count++;
	return (count);
}
