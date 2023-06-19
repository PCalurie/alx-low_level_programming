/**
 * add - Performs addition between two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the addition.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Performs subtraction between two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the subtraction.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Performs multiplication between two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the multiplication.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Performs division between two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of the division.
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
	{
		/* Handle division by zero error */
		/* You can choose to return an error code or handle it differently */
		/* For simplicity, this example returns zero in division by zero */
		return (0);
	}
}

/**
 * mod - Performs modulo between two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of the modulo operation.
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
	{
		/* Handle division by zero error */
		/* You can choose to return an error code or handle it differently */
		/* For simplicity, this example returns zero in division by zero */
		return (0);
	}
}
