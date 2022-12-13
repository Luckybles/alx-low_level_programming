#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * Return 0
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int num = 1;

	while (num <= 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		num++;
}
