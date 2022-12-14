#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer number
 * Return: natural numbers
 */
void print_to_98(int n)
{
	if (n >= 0)
	{
		for (n = 0; n <= 98; n++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar('\n');
		}
	}
}
			
