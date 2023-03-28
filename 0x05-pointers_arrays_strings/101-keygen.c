#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates a random password consisting of 12 characters
 * Return: Always 0
 */

int main(void)
{
    char password[84];  // Define a char array to hold the password
    int i = 0, j = 0, first, second;

    srand(time(0));  // Seed the random number generator with the current time

    while (j < 2772)  // Loop until the sum of the ASCII values of the password is 2772
    {
        password[i] = 33 + rand() % 94;  // Generate a random character between ASCII 33 and 126
        j += password[i++];  // Add the ASCII value of the character to the sum and increment the index
    }
    
    password[i] = '\0';  // Terminate the password string with a null character
    
    if (j != 272)  // If the sum is not 272 (2772 - 2*750), adjust the first and second characters
    {
        first = (j - 2772) / 2;  // Calculate the value to subtract from the first character
        second = (j - 2772) / 2;  // Calculate the value to subtract from the second character

        if ((j - 2772) % 2 != 0)  // If the sum is odd, add 1 to the first character adjustment
        {
            first++;
        }

        // Find the first character greater than or equal to the adjusted value and subtract the adjustment
        for (i = 0 ; password[i] ; i++)
        {
            if (password[i] >= (33 + first))
            {
                password[i] -= first;
                break;
            }
        }

        // Find the first character greater than or equal to the adjusted value and subtract the adjustment
        for (i = 0 ; password[i] ; i++)
        {
            if (password[i] >= (33 + second))
            {
                password[i] -= second;
                break;
            }
        }
    }

    printf("%s", password);  // Print the password

    return (0);
}


