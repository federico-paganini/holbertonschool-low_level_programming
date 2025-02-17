#include <stdio.h>

/**
 * main - prints all possible different combinations 
 * of three digits.
 *
 * Return: Returns 0 (Exit without errors).
 */

int main(void)
{
        char i;
        char j;

        for (i = 0; i < 9; i++)
        {
                for (j = 0; j < 10; j++)
                {
                        if (i < j)
                        {
                                putchar(i + '0');
                                putchar(j + '0');
                                if (i == 8 && j == 9)
                                {
                                        putchar('\n');
                                }
                                else
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
                }
        }

        return (0);
}
