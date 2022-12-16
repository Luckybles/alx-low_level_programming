#include "main.h"
/**
 * more_numbers - print 10 times the number from 0 14
 *
 * Return: 10 times the number from 0 to 14
 */
void more_numbers(void)
{
	int numb;
	int mult;

	for (numb = 1; numb <= 10 ; numb++)
	{
		for (mult = 0; mult <= 14; mult++)
		{
			if (mult >= 10)
				_putchar('1');
			_putchar(mult % 10 + '0');
		}
		_putchar('\n');
	}
}
