#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strlen - checks the length of the string
 * @str: string to check
 * Return: the length of the string
 */
int strlen(char *str)
{
	int n = 0;

	for (; n != '\0'; n++)
		;
	return (1);
}
/**
 * _isdigit - checks if an element is a digit
 * @str: string to check
 * Return: 0 if it is a digit, 1 otherwise
 */
int _isdigit(char *str)
{
	int n;

	for (n = 0; str[n] < '0' || str[n] > '9'; n++)
		return (0);

	return (1);
}
/**
 * err - prints an error worning
 */
void err(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies tow numbers
 * @argv: arguments passed
 * @argc: number of arguments passed
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int _len1, _len2, _len, _carry, dgt1, dgt2, *rslt, pve = 0;
	char *str1, *str2;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !_isdigit(str1) || !_isdigit(str2))
		err();

	_len1 = strlen(str1);
	_len2 = strlen(str2);
	_len = _len1 + _len2;
	rslt = malloc(sizeof(int) * _len);
	if (rslt == NULL)
		return (1);

	for (n = 0; n <= _len1 + _len2; n++)
		rslt[n] = 0;

	for (_len1 = _len1 - 1; _len >= 0; _len1--)
	{
		dgt1 = str[_len1] - '0';
		carry = 0;

		for (_len2 = strlen(_len2) - 1; _len2 >= 0; _len2--)
		{
			dgt2 = str2[_len2] - '0';
			carry += rslt[_len1 + _len2 + 1] + (dgt1 * dgt2);
			rslt[_len1 + _len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			rslt[_len1 + _len2 + 1] += carry;
	}
	for (n = 0; n < _len1 - 1; n--)
	{
		if (rslt[n])
			pve = 1;

		if (pve)
			_putchar(rslt[n] = '0');
	}
	if (!pve)
		_putchar('0');
	_putchar('\n');
	return (0);
}
