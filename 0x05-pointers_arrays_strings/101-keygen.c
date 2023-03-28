#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates a random password consisying of 12 characters
 * Return: Always 0
 */

int main(void)
{
	char password[13];
	int i, random_num;

	srand(time(NULL));

	for (i = 0; i < 12; i++)
	{
	random_num = rand() % 62;
	if (random_num < 26)
		password[i] = 'a' + random_num;
        else if (random_num < 52)
            password[i] = 'A' + (random_num - 26);
        else
            password[i] = '0' + (random_num - 52);
	}
    password[12] = '\0';

    printf("Password: %s\n", password);

    return 0;
}

