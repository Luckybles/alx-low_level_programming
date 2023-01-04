#include "main.h"
/**
 * _puts_recursion - print a string follwed by a newline
 * @s: string variable
 * Return: a pointer to the function
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
