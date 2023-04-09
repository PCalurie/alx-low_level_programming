#include "main.h"
#include <stddef.h>
/**
 * _strchr - finds the first occurrence of achar in a string
 * @s: string to search in
 * @c: char to find
 * Return: string to first occurrence of the char
 */
char *_strchr(char *s, char c)
{
/* loop though each char in string */
	while (*s != '\0')
	{
/* check if the current char is equal to the char beeing searched */
		if (*s == c)
			return (s);
	}
/* if not return NULL */
	return (NULL);
}
