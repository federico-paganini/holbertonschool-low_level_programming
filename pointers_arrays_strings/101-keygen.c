#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

/**
 * generate_password - Generates a random password.
 *
 * @password: Array to generate password.
 */

void generate_password(char *password)
{
	int sum = 0, i = 0;

	srand((unsigned int)time(NULL));

	while (sum < 2772)
	{
		int random_char = (rand() % (32 - 127)) + 32;

		if (sum + random_char > 2772)
		{
			random_char = 2772 - sum;
			if (random_char < 32 || random_char > 126)
				continue;
		}

		password[i++] = (char)random_char;
		sum += random_char;
	}

	password[i] = '\0';
}

/**
 * main - Prints the password.
 *
 * Return: Returns 0 (Exit without errors).
 */

int main(void)
{
	char password[100];

	generate_password(password);

	printf("%s\n", password);

	return (0);
}
