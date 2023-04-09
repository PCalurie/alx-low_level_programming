# 0x09. C - Static libraries
TASKS

[0. A library is not a luxury but one of the necessities of life](libmy.a)

Create the static library libmy.a containing all the functions listed in the question.

0. 0-isupper.c - prints 1 for inputed uppercase letter an 0 otherwise.
0. 0-memset.c - allocates fills memory with a constant byte and points to the access of the memory block
0. 0-strcat.c - concatenates two strings by appending the input string to the existing one.
1. 1-isdigit - checks if a char is a digit
1. 1-memcpy.c - The function loops through each byte of the source memory area, copying it to the corresponding byte in the destination memory area. It does this for the specified number of bytes.
1. 1-strncat.c - concatenate two strings, with the option of specifying a maximum number of bytes to copy from the second string src to the first string dest. Overall, this function is useful when we want to concatenate two strings but want to limit the size of the resulting string.
Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.
2. 2-strchr.c - checks the string where the char being searched gor appears first.
2. 2-strlen.c - counts the length of a string inputed.
2. 2-strncpy.c - copyies a string to a destination file.
3. 3-islower.c - checks if char is lower case.
3. 3-puts - prints out a string.
4. 3-strcmp.c - compares two strings.
4. 4-isalpha.c - checks if a char is alphabet.
4. 4-strpbrk.c - checks the string with matching characters as string inputed.
5 5-strstr.c - checks for the first appearance of a substring in string.
6. 6-abs.c - prints the absolute value of an integer.
9. 9-strcpy - copies a string.
[1. Without libraries what have we? We have no past and no future](create_static_lib.sh)

Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

main.h: Main.h contains all the prototype of function of the tasks.
