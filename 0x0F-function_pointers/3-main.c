#include "3-calc.h"
/**
 * main - performs the operations
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 success
 */
int main(argc, *argv[])
{
	int a, b;

	int (*my_pnt_func)(int, int);

	if (argc != 4)
		printf("Error\n");
		exit(98);

	my_pnt_func = get_op_func(argv[2]);
	if (!my_pnt_func)
		printf("Error\n");
		exit(99);

	a = atoi(argv[1]);
	b = atoi(argv2[]);
	printf("%i\n", my_pnt_func(a, b));
	return (0);
}
