#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed
 * @argv: arguments
 * @argc: number of arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
