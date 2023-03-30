#include "main.h"
/**
 * *rot13 - encodes a string using ROT13 encryption
 * @s: pointer to the string to encode
 *
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
	char rot, *r = s;

	while (*s)
	{
		rot = (*s & 32) + 65;
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			*s = (*s - rot + 13) % 26 + rot;
		}
		s++;
	}

	return (r);
}
