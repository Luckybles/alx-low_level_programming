#include "main.h"
/**
 * print_numbers - print from 0 to 9
 *
 * Return: number from 0 to 9
 */
void print_numbers(void)
{
	int numb;

	for (numb = '0'; numb <= '9'; numb++)
	{
		_putchar(numb);
	}
	_putchar('\n');
}
