#include "main.h"
#include <stdlib.h>
/**
 * argstostr - cocatenates all arguments given
 * @ac: number of arguments
 * @av: arguments
 * Return: pointer to new str
 */
char *argstostr(int ac, char **av)
{
	int i, j, n = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

/* calculate the length of inputed str */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			n++;
		n++; /* for the new line */
		}
	}
/* allocate mem for the new char */
	str = malloc(sizeof(char) * (n + 1));
	if (str == NULL)
		return (NULL);
/* copy the argument to the new str */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[n++] = av[i][j];
		}
		str[n++] = '\n'; /* add new line */
	}
	str[n] = '\0'; /* add null terminator */

	return (str);
}
