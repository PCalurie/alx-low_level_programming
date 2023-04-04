#include "main.h"
/**
 * _strchr - locates char c in string s
 * @s: string to check
 * @c: character to check
 * Return:  string with c or else NULL
 */

char *_strchr(char c, char *s)
{
	do {
		if (*s == c)
			return (s);
		s++;
		} while (*s != '\n');

	return (NULL);
}
