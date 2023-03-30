#include "main.h"
/**
 * *rot13 - encodes a string using ROT13 encryption
 * @s: pointer to the string to encode
 *
 * Return: pointer to encoded string
 */

char *rot13(char *s)
{
	char rot, r = s;
/* iterate through the string */
	while (*s)
	{
/* calculate ASCII code of 'A' or 'a' based on case on the character */
		rot = (*s & 32) + 65;

		/* check if character is a letter */
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' || *s <= 'Z'))
		{
			/* apply ROT-13 encryption */
			*s = (*s - rot + 13) % 26 + rot;
		}
		/* move to the next character*/
		s++;
	}
	/* return the modified string */
	return (r);
}
