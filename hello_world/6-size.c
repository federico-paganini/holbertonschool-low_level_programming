#include <stdio.h>

/**
 * main - Prints the sizes of data types.
 * Return: Returns 0 (Exit without errors).
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(unsigned long));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));

	return (0);
}
