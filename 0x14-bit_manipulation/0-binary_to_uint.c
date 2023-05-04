#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number as a string
 *
 * Return: unsigned int value of binary number, or 0 if invalid input
 */
unsigned int binary_to_uint(const char *b)
{
        unsigned int result = 0;
        int i;

        if (!b)
                return (0);

        for (i = 0; b[i]; i++)
        {
                if (b[i] != '0' && b[i] != '1')
                        return (0);

                result <<= 1;
                result += (b[i] - '0');
        }

        return (result);
}
