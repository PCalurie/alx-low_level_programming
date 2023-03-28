#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: string function parameter
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int str_len = strlen(s);

	for (i = 0; i < str_len; i++)
		char temp_character = s[i];

		s[i] = s[str_len - i - 1];
		s[str_len - i - 1] = temp_character;
}

