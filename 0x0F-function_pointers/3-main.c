#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs the operations
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int a, b, res;

	int (*my_pnt_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	my_pnt_func = get_op_func(argv[2]);
	if (!my_pnt_func)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	my_pnt_func = get_op_func(argv[2]);
	b = atoi(argv[3]);

	if (my_pnt_func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	res = my_pnt_func(a, b);
	printf("%d\n", res);

	return (0);
}
