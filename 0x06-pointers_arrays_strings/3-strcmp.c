#include "main.h"
/**
 * _strcmp - prints the comparison between two strings
 * @s1: string one
 * @s2: string two
 * Return: always 0 success
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
