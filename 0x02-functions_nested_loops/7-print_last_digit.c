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

	if (t < 0)
	{
		t *= -1;
	}
	else
	{
		_putchar(t +'0');
	}
	return (0);
}
