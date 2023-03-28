#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: string function parameter
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int str_len = 0;
	char temp_character = S[0];

	while (s[str_len] != '\n')
		str_len++;

	for (i = 0; i < str_len; i++)
	{
		str_len--;
		temp_character = s[i];
		s[i] = s[str_len];
		s[str_len] = temp_character;
	}
}

