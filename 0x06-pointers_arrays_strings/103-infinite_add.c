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
	int add = 0, len1 = 0, len2 = 0, i = 0, j = 0;
/* calculate the length of input strings*/
	for (; n1[len1]; len1++)
		;
	for (; n2[len2]; len2++)
		;
/* if the result string is less than sum size, return 0 */
	if (len1 > size_r || len2 > size_r)
		return (0);
/* decreament the length and size counter as they are 1-indexed */
	len1--, len2--, size_r--;
/* iterate through the arrays starting from the end */
	for (i = 0; i < size_r; i++, len1--, len2--)
	{
/* add digits from the input arrays if they exist */
		if (len1 >= 0)
			add += n1[len1] - '0';
		if (len2 >= 0)
			add += n2[len2] - '0';
		if (len1 < 0 && len2 < 0 && add == 0)/* if no more digits to add exit loop */
			break;
		r[i] = add % 10 + '0';/* store the sum in the result array */
		add /= 10;/* calculate the carry to be added in the next iteration */
	}
	r[i] = '\0';/* terminate the result string */
/* if digits still in input arrays or return 0 */
	if (len1 >= 0 || len2 >= 0 || add)
		return (0);
	for (i--, j = 0; i > j; i--, j++)/* reverse the result array */
	{
		add = r[i];
		r[i] = r[j];
		r[j] = add;
	}
	return (r);
}
