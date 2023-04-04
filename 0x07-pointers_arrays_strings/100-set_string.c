#include "main.h"
/**
 * set_string - sets value of a pointer to char
 * @s: pointer of value to be set
 * @to: pointer to be set the value
 */
void set_string(char **s, char *to)
{
	**s = to;
}
