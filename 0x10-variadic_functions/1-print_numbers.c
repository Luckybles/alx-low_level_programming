#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j;
	int numb;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (j = 0; j < n; j++)
	{
		numb = var_arg(args, int);
		if (separator == NULL)
		{
			if (j == n - 1)
				printf("%d\n", numb);
			else
				printf("%d", numb);
		}
		else
		{
			if (j == n - 1)
				printf("%d\n", numb);
			else
				printf("%d%s", numb, separator);
		}
	}
	va_end(args);
}

