#include "main.h"
/**
 * _strlen_recursion - return the length of a string
 * @s: the string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if(*s)
	{
		len += _strlen_recursion(s + 1);
		len++;
	}
}
