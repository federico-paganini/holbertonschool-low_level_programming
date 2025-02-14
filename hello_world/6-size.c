#include <stdio.h>

/**
 * main - Prints the sizes of data types.
 * Return: Returns 0 (Exit without errors).
 */

int main(void)
{
	char c;
	int n;
	long nl;
	long long int nlg;
	float nf;

	printf("Size of a char: %u byte(s)\n", sizeof(c));
	printf("Size of an int: %u byte(s)\n", sizeof(n));
	printf("Size of a long int: %u byte(s)\n", sizeof(nl));
	printf("Size of a long long int: %u byte(s)\n", sizeof(nlg));
	printf("Size of a float: %u byte(s)\n", sizeof(nf));

	return (0);
}
