#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates char c in string s
 * @s: string to check
 * @c: character to check
 * Return:  string with c or else NULL
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
		s++;
		} while (*s != '\n');

	return (NULL);
}
