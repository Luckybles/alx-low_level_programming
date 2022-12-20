#include "main.h"
/**
 * puts2 - print every character of a string
 * @str: string
 * Return: every character of a string
 */
void puts2(char *str)
{
	int collect;
	int i;

	while (*str != '\0')
		collect++;
		str++;
	for (i = 0; i < collect - 1; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
