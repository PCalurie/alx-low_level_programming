#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concats two strings
 * @s1: string one
 * @s2: string two
 * @n: bytes of str 2
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *pt;

	if (s1 == NULL)
		s1 = ' ';

	if (s2 == NULL)
		s2 = ' ';

	for (a = 0; s1[a]; a++)
		;

	for (b = 0; s2[b]; b++)
		;

	if (n >= b)
		d = a + b;
	else
		d = a + n;

	pt = malloc(sizeof(char) * d + 1);
	if (pt == NULL)
		return (NULL);

	for (c = 0; c < d; c++)
	{
		if (c <= a)
			pt[c] = s1[c];
		else
			pt[c] = s2[b];
		b++;
	}
	pt[c] = '\0';

	return (pt);
}

