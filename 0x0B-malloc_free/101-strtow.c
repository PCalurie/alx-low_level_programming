#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* helper functions */
int word_len(char *str);
int count_words(char *str);

int idx, words, lt = 0, w, l;
/**
 * word_len - finds the first word of the string
 * @str: the string to check in
 * Return: the index marking the end of the word
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}
/**
 * count_words - counts the words in the str
 * @str: the string to count words in
 * Return: number of words in the str
 */
int count_words(char *str)
{
	int words = 0, len = 0, index = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ' && (index == 0 || str[index - 1] == ' '))
		{
			words++;
		}
	}

	return (words);
}

/**
 * strtow - function splits a string into two words
 * @str: string to split
 * Return: split words
 */
char **strtow(char *str)
{
	char **strings;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

/* allocate memory for the array of string */
	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

/* loop through string and count words */
	for (w = 0, (idx = 0); w < words; w++)
	{
		while ((str[idx] == ' '))
			idx++;

		while (*(str + idx + lt) != ' ' && *(str + idx + lt) != '\0')
		{
			lt++;
		}
/* allocate memory for the current word */
		strings[w] = malloc(sizeof(char) * (lt + 1));

		if (strings[w] == NULL)
		{
			for (w--; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}
/* copy current words into array */
		for (l = 0; l < lt; l++)
			strings[w][l] = *(str + idx++);

		strings[w][l] = '\0';
	}

	strings[w] = NULL;

	return (strings);
}
