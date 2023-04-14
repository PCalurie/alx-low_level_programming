#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strlen - checks the length of the string
 * @str: string to check
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		;
	return (n);
}
/**
 * _isdigit - checks if an element is a digit
 * @str: string to check
 * Return: 0 if it is a digit, 1 otherwise
 */
int _isdigit(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
		if (str[m] < '0' || str[m] > '9')
		return (0);
	}
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
	long int _len1, _len2, _len, _carry, num1, num2, i, j, *mul;
	int pve = 0;

	if (argc != 3)
		err();

	if (!_isdigit(argv[1]) || !_isdigit(argv[1]))
		err();

	_len1 = _strlen(argv[1]);
	_len2 = _strlen(argv[2]);
	_len = _len1 + _len2;
	mul = malloc(sizeof(long int) * (_len + 1));
	if (mul == NULL)
		return (1);

	for (i = 0; i < _len; i++)
		mul[i] = 0;

	for (_len1 = _len1 - 1; i >= 0; i--)
	{
		num1 = argv[1][i] - '0';
		_carry = 0;

		for (j = _len2; j >= 0; j--)
		{
			num2 = argv[2][j] - '0';
			_carry += mul[i + j + 1] + (num1 * num2);
			mul[i + j + 1] = _carry % 10;
			_carry /= 10;
		}
		if (_carry > 0)
			mul[i + j + 1] += _carry;
	}
	for (i = 0; i < _len; i++)
	{
		if (mul[i])
			pve = 1;

		if (pve == 1)
		{
			_putchar('0');
		}
		else
		{
			for (i = _len - 1; i >= 0; i--)
				_putchar(mul[i] + '0');
		}
		_putchar('\n');
	}
	free(mul);
	return (0);
}
