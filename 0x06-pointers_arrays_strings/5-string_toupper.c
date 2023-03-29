#include "main.h"
/**
 * *string_toupper - chages all lower-case letters to upper-case
 * @str: string being changed
 * Return: changed string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)/*iterate through the string*/
	{
		if (str[i] >= 'a' && str[i] <= 'z')/*check if it is lower-case*/
			str[i] -= 32;/*change to upper-case*/
	}
	return (str);
}
