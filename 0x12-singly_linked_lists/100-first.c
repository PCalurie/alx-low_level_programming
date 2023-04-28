#include <stdio.h>

/**
 * before_main - function to be called before the main function
 *
 * This function is declared with the __attribute__ ((constructor)) directive,
 * which makes it automatically run before the main function is called.
 */
void before_main(void) __attribute__ ((constructor));

/**
 * before_main - implementation of the function to be called before main
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
