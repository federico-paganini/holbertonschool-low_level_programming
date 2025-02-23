#include <stdio.h>

/**
 * addnum - Adds numbers almacenated in an array.
 *
 * @arr1: First number almacenated in an array.
 * @arr2: Second number almacenated in an array.
 * @result: Array to handle the result.
 * @decimals: Variable to handle an addition bigger than 9.
 * @j: Iterator to print the result outside the function.
 */

void addnum(int *arr1, int *arr2, int *result, int *decimals, int *j)
{
	int add;
	*j = 0;

	do {
		add = arr1[*j] + arr2[*j] + *decimals;

		if (add < 10)
		{
			result[*j] = add;
			*decimals = 0;
		}
		else
		{
			result[*j] = add % 10;
			*decimals = 1;
		}

		(*j)++;
	} while ((arr1[(*j) + 1] != 0 || arr2[(*j) + 1] != 0)
			|| add > 0 || *decimals > 0);
}

/**
 * main - Prints the first 98 fibonacci numbers.
 *
 * Return: Returns 0 (Exit without errors).
 */

int main(void)
{
	int i, k, j;
	int decimals = 0;
	int prev[25] = {1};
	int numb[25] = {2};
	int sum[25];

	printf("%d, %d, ", prev[0], numb[0]);

	for (i = 3; i <= 98; i++)
	{
		addnum(prev, numb, sum, &decimals, &j);
		for (k = j - 2; k >= 0; k--)
		{
			printf("%d", sum[k]);
		}

		if (i != 98)
		{
			printf(", ");
		}
		else
		{
			putchar('\n');
		}

		for (k = 0; k < j; k++)
		{
			prev[k] = numb[k];
			numb[k] = sum[k];
		}
	}

	return (0);
}
