#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - checks the first ocurrence of string s
 * in any of the bytes of string accept
 * @s: string to check
 * @accept: string where bytes are found
 * Return: to the pointer s where bytes match or NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
/* loop through string accept */
		int i;

			for (i = 0; accept[i]; i++)
			{
			if (accept[i] == *s)
			return (s);
			}
			s++;
	}
	return (NULL);
}
