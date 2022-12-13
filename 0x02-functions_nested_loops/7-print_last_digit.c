#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to show the last digit
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int t;

	t = n % 10;
	if (t >= 0)
		_putchar(t + '0');
	else
		_putchar(-1 + '0');
	return (0);
}
