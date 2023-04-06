#include "main.h"
#include <stdio.h>
/**
 * _sqrt_aid - calculates natural sqrt recursively
 * @x: num to check
 * @a: guessed number
 * Return: sqrt of x or else -1 for error
 */
int sqrtaid(int x, int a);
/**
 * _sqrt_recursion - prints the natural square root of a number
 * @x: number to calculate its natural square root
 * Return: sqrt of x or else -1 for error
 */
int _sqrt_recursion(int x)
{
	if (x == 1 || x == 0) /* the sqrt of 0 or 1 is itself */
	return (1);

	if (x < 0) /* if input is -ve, retun an error */
	return (-1);
/* calculates the sqrt of the guessed no. recursively */
	return (sqrtaid(x, 1));
}
/**
 * sqrtaid - calculates recursively the  natural square root
 * @x: number to check
 * @a: number to guess
 *
 * Return: sqrt of x or else -1 for errors
 */
int sqrtaid(int x, int a)
{
	if (a * a == x) /* if the guess is = to num print th gues */
		return (a);

	if (a * a < x) /* if it is less,increament and recursively calls itself */
		return (sqrtaid(x, a + 1));
/* if it is greater than x, its no longer a whole number */
	return (-1);
}
