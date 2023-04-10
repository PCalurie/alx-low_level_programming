#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * from a specific set of characters
 * @s: the string to search
 * @accept: the set of string to accept
 * Return: the number of bytes in the innitial segment
 * of 's' which contains only accepted characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int m, n = 0;
/* for each char in 's' */
	for (m = 0; s[m] != '\0'; m++)
	{
/* for each char in accept */
		for (n = 0; accept[n] != '\0'; n++)
		{
/* if the current char in accept matches char in s */
			if (s[m] == accept[n])
			{
				length++; /* increament length */
				break; /* break from inner loop */
			}
		}
/* if we reach the end of string accept with no match */
	if (accept[n + 1] == '\0')
		break;
	}

	return (length);
}
