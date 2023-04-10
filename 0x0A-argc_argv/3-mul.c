#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of multplication
 * @argv: arguments
 * @argc: number of arguments
 * Return: 0 success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int a, b, answ;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	answ = a * b;

	printf("%d\n", answ);
	return (0);
}
