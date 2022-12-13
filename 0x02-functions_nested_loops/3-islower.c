#include "main.h"
/**
 * _islower -check for lowercase
 * Return: 1 if c is lower or return 0 if c is greater
 */
int _islower(int c)
{
	int r;

	for (r = 'A'; r <= 'Z'; r++)
	{
		if (r == 'c')
		{
			_putchar(1 +'0');
		}
		else
		{
			_putchar(0 +'0');
		}
		_putchar('\n');
	}
	return (0);
}
