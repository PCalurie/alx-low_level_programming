#include "main.h"
/**
 * wldcmp - compares two strings
 * @s1: string 1
 * @s2: string 2 it can contain '*' as a special char
 * Return: 1 identical or 0 otherwise
 */
int wldcmp(char *s1, char *s2)
{
/* if both strings are empty they are identical */
	if (*s1 == '\0' && *s2 == '\0')
	return (1);
/* if both current char match move to the next char */
	if (*s1 == *s2)
	return (wldcmp(s1 + 1, s2 + 1));
/* if the current char in s2 is '*' then move to the next char */
	if (*s2 == '*')
	{
/* if s2 ends with '*', they are identical */
		if (*(s2 + 1) == '\0')
		return (1);
/* compare the rest of s1 with s2 after the '*' */
		if (wldcmp(s1, s2 + 1))
		return (1);
/* compare the rest f s1 starting with the next char with the rest of s2 */
		if (s1 != '\0' wldcmp(s2 + 1, s2))
		return (1);
	}

	return (0);
}
