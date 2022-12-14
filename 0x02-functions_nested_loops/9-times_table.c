#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int numb;
	int multiply;
	int product;

	for (numb = 0; numb <= 9; numb++)
	{
		_putchar('0');
		for (multiply = 1; multiply <= 9; multiply++)
		{
			product = number * multiply;
			_putchar(',');
			_putchar(' ');

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0')
			_putchar((product % 10 ) + '0');
		}

		_putchar('\n');
	}
}
