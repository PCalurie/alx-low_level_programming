#include "main.h"
/**
 * factorial - calculates the factorial of a given number
 * @n: function parameter
 * Return: 0 Always success or else -1 error
 */
int factorial(int n)
{
	if (n == 0 || n == 1) /* factorial of 0 and 1 is 1 */
	return (1);

	if (n < 0) /* -ve ints should return an error */
	return (-1);

	return (n * factorial(n - 1)); /* n is multipled by less than itself by 1 */
}
