#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings into one
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	c = a + b;
	str = malloc((sizeof(char) * c) + 1);

	for (d = 0; d < c; d++)
	{
		if (d <= a)
		{
			str[d] = s1[d];
		}
		if (d >= a && d < c)
		{
			str[d] = s2[d - a];
		}
	}
	str[d] = '\0';

	return (str);
}

