#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to show the last digit
 * Return: the value of the last digit
 */
int print_last_digit(int)
{
	int n;

	n = n % 10;

	if (n < 0)
	{
		n *= -1;
	}
	else
	{
		_putchar(n +'0');
	}
	return (0);
}
