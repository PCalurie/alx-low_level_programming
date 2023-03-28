#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: string function parameter
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int str_len = 0;
	char temp_character;

	while (s[i++])
		str_len++;

	for (i = str_len - 1; i >= str_len / 2; i--)
	{
		temp_character = s[i];

		s[i] = s[str_len - i - 1];
		s[str_len - i - 1] = temp_character;
	}
}

