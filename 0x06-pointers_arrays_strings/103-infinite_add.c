#include "main.h"
/**
 * *infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result size
 * Return: result of addition of n1 and n2
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int add = 0, len1, len2, i, j;

/* calculate the length of input strings*/
	for (len1 = 0; n1[len1]; len1++)
		;
	for (len2 = 0; n2[len2]; len2++)
		;

/* if the result string is less than sum size, return 0 */
	if(len1 > size_r || len2 > size_r)
		return (0);

/* decreament the length and size counter as they are 1-indexed */
	len1--;
	len2--;
	size_r--;

/* iterate through the arrays starting from the end */
	for (i = 0; i < size_r; i++, len1--, len2--)
	{
/* add digits from the input arrays if they exist */
		if (len1 >= 0)
			add += n1[len1] - '0';
		if (len2 >= 0)
			add += n2[len2] - '0';

/* if there are no more digits to add and carry is 0, exit loop */
		if (len1 < 0 && len2 < 0 && add == 0)
			break;

/* store the sum in the result array */
		r[i] = add % 10 + '0';

/* calculate the carry to be added in the next iteration */
		add /= 10;
	}

/* terminate the result string */
	r[i] = '\0';

/* if digits still left in the input arrays or carry is not 0, return 0 */
	if (len1 >= 0 || len2 >= 0 || add)
		return (0);

/* reverse the result array */
	for (i--, j = 0; i > j; i--, j++)
	{
		add = r[i];
		r[i] = r[j];
		r[j] = add;
	}

/* return the result */
	return (r);
}
