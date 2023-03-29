#include "main.h"
/**
 * *leet - encodes a string to 1337
 * @s: string encoded
 * Return: Encoded string
 */

char *leet(char *s)
{
	char *p = s;
	char *r = "AEOtl";
	char *n = "43071";

	while (*p)
	{
		int i;

		for (i = 0; r[i]; i++)
		{
			if (*p == r[i] || *p == r[i] + 32)
			{
				*p = n[i];
				break;
			}
		}
		p++;
	}
	return (s);
}
