#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string character
 * Return: the second half of the string
 */
void puts_half(char *str)
{
	int count = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (( count - 1) / 2)
		{
			_putchar(str[i]);
		}
		else
		{
			i = count % 2 == 1;
			_putchar(i);
		}
		_putchar('\n');
	}
}
