#include <stdio.h>
/**
 * main - entry block
 * description:prints all possible combinations of single-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');

		if (number = 0 || number < 10)
		{
				putchar(',');
				putchar(' ');
		}
	}
		putchar('\n');
	return (0);
}
