#include "main.h"
/**
 * print_most_numbers - print the number from 0 to 9
 *
 * Return:print from 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int numb;

	for (numb = 48; numb <= 57; numb++)
	{
		if (numb != 50 && numb != 52)
		{
			_putchar(numb);
		}
		_putchar('\n');
	}
}
