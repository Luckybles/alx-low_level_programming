#include "main.h"
/**
 * print_square - print a square
 * @size:  size of square
 * Return: void
 */
void print_square(int size)
{
	int firstloop;
	int secondloop;

	if (size <= 0)
		_putchar('\n');

	for (firstloop = 0; firstloop < size; firstloop++)
	{
		for (secondloop = 0; secondloop < (size); secondloop++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
